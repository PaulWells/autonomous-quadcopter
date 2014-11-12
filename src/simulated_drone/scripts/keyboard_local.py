#!/usr/bin/env python
import rospy
import pygame, pygame.font
from std_msgs.msg import String, Header
from sensor_msgs.msg import Range, Image 
from geometry_msgs.msg import Twist, Vector3

pygame.init()
font = pygame.font.SysFont('Calibri', 18)
frontRange = None 
sideRange = None
image = None 

def updateFrontRange(rangeData):
    global frontRange
    frontRange = rangeData

def updateSideRange(rangeData):
    global sideRange
    sideRange = rangeData

def updateImage(imageRaw):
    global image
    image = imageRaw

def controller():
    global frontRange
    global sideRange

    rospy.init_node('controller', anonymous=True)
    rospy.Subscriber("range_front", Range, updateFrontRange)
    rospy.Subscriber("range_side", Range, updateSideRange)
    rospy.Subscriber("ardrone/front/image_raw", Image, updateImage)
    pub = rospy.Publisher('cmd_vel', Twist, queue_size=10)
    r = rospy.Rate(10) # 10hz

    pygameRunning = True
    screen = pygame.display.set_mode((200, 70))

    while not rospy.is_shutdown() and pygameRunning:
        for e in pygame.event.get():
            if e.type == pygame.QUIT:
                pygameRunning = False

        screen.fill((0, 0, 0))

        pressed = pygame.key.get_pressed()

        linearVector = Vector3(0, 0, 0)

        if pressed[pygame.K_UP]: linearVector.x += 1
        if pressed[pygame.K_DOWN]: linearVector.x -= 1
        if pressed[pygame.K_LEFT]: linearVector.y += 1
        if pressed[pygame.K_RIGHT]: linearVector.y -= 1
        if pressed[pygame.K_w]: linearVector.z += 1
        if pressed[pygame.K_s]: linearVector.z -= 1
        
        angularVector = Vector3(0, 0, 0)

        if pressed[pygame.K_a]: angularVector.z += 1
        if pressed[pygame.K_d]: angularVector.z -= 1

        cmd = Twist(linearVector, angularVector)
        pub.publish(cmd)

        if frontRange:
            screen.blit(font.render("Front Range = "
                + str(frontRange.range), 1, (255, 255, 255)), (10, 10))
        if sideRange:
            screen.blit(font.render("Side Range = "
                + str(sideRange.range), 1, (255, 255, 255)), (10, 30))
        if image:
            screen.blit(font.render("Last Image at = "
                + str(image.header.stamp), 1, (255, 255, 255)), (10, 50))
        pygame.display.update()

        r.sleep()

    pygame.display.quit()

if __name__ == '__main__':
    try:
        controller()
    except rospy.ROSInterruptException: pass
