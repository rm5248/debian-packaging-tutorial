project( SimplePackageLibrary )
cmake_minimum_required( VERSION 3.10 )

add_library( simple-lib SHARED simple-lib.c )
set_target_properties(simple-lib PROPERTIES
  VERSION 0
  SOVERSION 0
)

#
# Configure our installation.  Install to the proper bin directory
#
include( GNUInstallDirs )
install(TARGETS simple-lib
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
install(FILES simple-lib.h
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/simple-lib
)
