if("bdacd1cbd3fbc54263d29e6e2067265e5941d10e" STREQUAL "")
  message(FATAL_ERROR "Tag for git checkout should not be empty.")
endif()

execute_process(
  COMMAND "/usr/bin/git" rev-list --max-count=1 HEAD
  WORKING_DIRECTORY "/home/greye/catkin_ws/build/ardrone/src/ardronelib"
  RESULT_VARIABLE error_code
  OUTPUT_VARIABLE head_sha
  )
if(error_code)
  message(FATAL_ERROR "Failed to get the hash for HEAD")
endif()

execute_process(
  COMMAND "/usr/bin/git" show-ref bdacd1cbd3fbc54263d29e6e2067265e5941d10e
  WORKING_DIRECTORY "/home/greye/catkin_ws/build/ardrone/src/ardronelib"
  OUTPUT_VARIABLE show_ref_output
  )
# If a remote ref is asked for, which can possibly move around,
# we must always do a fetch and checkout.
if("${show_ref_output}" MATCHES "remotes")
  set(is_remote_ref 1)
else()
  set(is_remote_ref 0)
endif()

# This will fail if the tag does not exist (it probably has not been fetched
# yet).
execute_process(
  COMMAND "/usr/bin/git" rev-list --max-count=1 bdacd1cbd3fbc54263d29e6e2067265e5941d10e
  WORKING_DIRECTORY "/home/greye/catkin_ws/build/ardrone/src/ardronelib"
  RESULT_VARIABLE error_code
  OUTPUT_VARIABLE tag_sha
  )

# Is the hash checkout out that we want?
if(error_code OR is_remote_ref OR NOT ("${tag_sha}" STREQUAL "${head_sha}"))
  execute_process(
    COMMAND "/usr/bin/git" fetch
    WORKING_DIRECTORY "/home/greye/catkin_ws/build/ardrone/src/ardronelib"
    RESULT_VARIABLE error_code
    )
  if(error_code)
    message(FATAL_ERROR "Failed to fetch repository 'git://github.com/AutonomyLab/ardronelib.git'")
  endif()

  execute_process(
    COMMAND "/usr/bin/git" checkout bdacd1cbd3fbc54263d29e6e2067265e5941d10e
    WORKING_DIRECTORY "/home/greye/catkin_ws/build/ardrone/src/ardronelib"
    RESULT_VARIABLE error_code
    )
  if(error_code)
    message(FATAL_ERROR "Failed to checkout tag: 'bdacd1cbd3fbc54263d29e6e2067265e5941d10e'")
  endif()

  execute_process(
    COMMAND "/usr/bin/git" submodule update --recursive
    WORKING_DIRECTORY "/home/greye/catkin_ws/build/ardrone/src/ardronelib/"
    RESULT_VARIABLE error_code
    )
  if(error_code)
    message(FATAL_ERROR "Failed to update submodules in: '/home/greye/catkin_ws/build/ardrone/src/ardronelib/'")
  endif()
endif()

