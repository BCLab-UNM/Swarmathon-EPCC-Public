# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "swarmie_msgs: 1 messages, 0 services")

set(MSG_I_FLAGS "-Iswarmie_msgs:/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(swarmie_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg" NAME_WE)
add_custom_target(_swarmie_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "swarmie_msgs" "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(swarmie_msgs
  "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/swarmie_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(swarmie_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/swarmie_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(swarmie_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(swarmie_msgs_generate_messages swarmie_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg" NAME_WE)
add_dependencies(swarmie_msgs_generate_messages_cpp _swarmie_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(swarmie_msgs_gencpp)
add_dependencies(swarmie_msgs_gencpp swarmie_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS swarmie_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(swarmie_msgs
  "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/swarmie_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(swarmie_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/swarmie_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(swarmie_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(swarmie_msgs_generate_messages swarmie_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg" NAME_WE)
add_dependencies(swarmie_msgs_generate_messages_eus _swarmie_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(swarmie_msgs_geneus)
add_dependencies(swarmie_msgs_geneus swarmie_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS swarmie_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(swarmie_msgs
  "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/swarmie_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(swarmie_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/swarmie_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(swarmie_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(swarmie_msgs_generate_messages swarmie_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg" NAME_WE)
add_dependencies(swarmie_msgs_generate_messages_lisp _swarmie_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(swarmie_msgs_genlisp)
add_dependencies(swarmie_msgs_genlisp swarmie_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS swarmie_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(swarmie_msgs
  "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/swarmie_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(swarmie_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/swarmie_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(swarmie_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(swarmie_msgs_generate_messages swarmie_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg" NAME_WE)
add_dependencies(swarmie_msgs_generate_messages_nodejs _swarmie_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(swarmie_msgs_gennodejs)
add_dependencies(swarmie_msgs_gennodejs swarmie_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS swarmie_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(swarmie_msgs
  "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/swarmie_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(swarmie_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/swarmie_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(swarmie_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(swarmie_msgs_generate_messages swarmie_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/timeinvestor2/SwarmBaseCode-ROS/src/swarmie_msgs/msg/Waypoint.msg" NAME_WE)
add_dependencies(swarmie_msgs_generate_messages_py _swarmie_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(swarmie_msgs_genpy)
add_dependencies(swarmie_msgs_genpy swarmie_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS swarmie_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/swarmie_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/swarmie_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/swarmie_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/swarmie_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/swarmie_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/swarmie_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/swarmie_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/swarmie_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/swarmie_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/swarmie_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/swarmie_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
