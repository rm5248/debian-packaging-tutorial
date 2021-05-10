project( SimplePackage )
cmake_minimum_required( VERSION 3.10 )

add_executable( simple-application main.c )

#
# Configure our installation.  Install to the proper bin directory
#
include( GNUInstallDirs )
install(TARGETS simple-application
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
