until rosrun rosserial_xbee setup_xbee.py -C /dev/ttyACM0 0 | grep -m 1 "Connected"; do
echo "Waiting..."
done

