add_executable (CMakeProject1 "main.cpp" "inout.h" "print.cpp" "read.cpp")
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
endif()

