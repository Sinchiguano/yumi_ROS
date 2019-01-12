# Install script for directory: /home/cesar/yumi_depends_ws/src/abb_experimental/abb_irb52_support

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cesar/yumi_depends_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/cesar/yumi_depends_ws/build/abb_experimental/abb_irb52_support/catkin_generated/installspace/abb_irb52_support.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb52_support/cmake" TYPE FILE FILES
    "/home/cesar/yumi_depends_ws/build/abb_experimental/abb_irb52_support/catkin_generated/installspace/abb_irb52_supportConfig.cmake"
    "/home/cesar/yumi_depends_ws/build/abb_experimental/abb_irb52_support/catkin_generated/installspace/abb_irb52_supportConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb52_support" TYPE FILE FILES "/home/cesar/yumi_depends_ws/src/abb_experimental/abb_irb52_support/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_irb52_support" TYPE DIRECTORY FILES
    "/home/cesar/yumi_depends_ws/src/abb_experimental/abb_irb52_support/config"
    "/home/cesar/yumi_depends_ws/src/abb_experimental/abb_irb52_support/launch"
    "/home/cesar/yumi_depends_ws/src/abb_experimental/abb_irb52_support/meshes"
    "/home/cesar/yumi_depends_ws/src/abb_experimental/abb_irb52_support/urdf"
    )
endif()
