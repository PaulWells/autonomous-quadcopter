# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "cvg_sim_msgs: 22 messages, 0 services")

set(MSG_I_FLAGS "-Icvg_sim_msgs:/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(cvg_sim_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Compass.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Compass.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorPWM.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorPWM.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ServoCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ServoCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawImu.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawImu.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawRC.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawRC.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/AttitudeCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/AttitudeCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityZCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityZCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityXYCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityXYCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/PositionXYCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/PositionXYCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altitude.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altitude.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Supply.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Supply.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altimeter.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altimeter.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ThrustCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ThrustCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RC.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RC.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RuddersCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RuddersCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeadingCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeadingCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawMagnetic.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawMagnetic.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeightCommand.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeightCommand.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ControllerState.msg" NAME_WE)
add_custom_target(_cvg_sim_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cvg_sim_msgs" "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ControllerState.msg" "std_msgs/Header"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Compass.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altitude.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorPWM.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ServoCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RC.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawRC.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/AttitudeCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityZCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/PositionXYCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityXYCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Supply.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altimeter.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ThrustCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawImu.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RuddersCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeadingCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawMagnetic.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeightCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_cpp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ControllerState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(cvg_sim_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(cvg_sim_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(cvg_sim_msgs_generate_messages cvg_sim_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Compass.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorPWM.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ServoCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawImu.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawRC.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/AttitudeCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityZCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityXYCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/PositionXYCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altitude.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Supply.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altimeter.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ThrustCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RC.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RuddersCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeadingCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawMagnetic.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeightCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ControllerState.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_cpp _cvg_sim_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cvg_sim_msgs_gencpp)
add_dependencies(cvg_sim_msgs_gencpp cvg_sim_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cvg_sim_msgs_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Compass.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altitude.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorPWM.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ServoCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RC.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawRC.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/AttitudeCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityZCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/PositionXYCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityXYCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Supply.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altimeter.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ThrustCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawImu.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RuddersCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeadingCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawMagnetic.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeightCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_lisp(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ControllerState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(cvg_sim_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(cvg_sim_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(cvg_sim_msgs_generate_messages cvg_sim_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Compass.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorPWM.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ServoCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawImu.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawRC.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/AttitudeCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityZCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityXYCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/PositionXYCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altitude.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Supply.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altimeter.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ThrustCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RC.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RuddersCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeadingCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawMagnetic.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeightCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ControllerState.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_lisp _cvg_sim_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cvg_sim_msgs_genlisp)
add_dependencies(cvg_sim_msgs_genlisp cvg_sim_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cvg_sim_msgs_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Compass.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altitude.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorPWM.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ServoCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RC.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawRC.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/AttitudeCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityZCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/PositionXYCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityXYCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Supply.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altimeter.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ThrustCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawImu.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RuddersCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeadingCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawMagnetic.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeightCommand.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)
_generate_msg_py(cvg_sim_msgs
  "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ControllerState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(cvg_sim_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(cvg_sim_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(cvg_sim_msgs_generate_messages cvg_sim_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Compass.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorPWM.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ServoCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawImu.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawRC.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/AttitudeCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityZCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/VelocityXYCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/PositionXYCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altitude.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Supply.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/Altimeter.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ThrustCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RC.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RuddersCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeadingCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/RawMagnetic.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/HeightCommand.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/greye/catkin_ws/src/tum_simulator/cvg_sim_msgs/msg/ControllerState.msg" NAME_WE)
add_dependencies(cvg_sim_msgs_generate_messages_py _cvg_sim_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cvg_sim_msgs_genpy)
add_dependencies(cvg_sim_msgs_genpy cvg_sim_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cvg_sim_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cvg_sim_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(cvg_sim_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cvg_sim_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(cvg_sim_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cvg_sim_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(cvg_sim_msgs_generate_messages_py geometry_msgs_generate_messages_py)
