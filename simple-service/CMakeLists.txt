project( SimpleService )
cmake_minimum_required( VERSION 3.10 )

add_executable( simple-service main.c )

#
# Configure our installation.  Install to the proper bin directory
#
include( GNUInstallDirs )
install(TARGETS simple-service
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# According to the Debian filesystem standard, files installed through
# a package should be under /lib/systemd/system
#
# Files under /etc are reserved for use by the system adiminstrator
install(FILES simple-service.service
  DESTINATION /lib/systemd/system
)
