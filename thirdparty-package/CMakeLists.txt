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

#
# Create a .tar.gz for distribution
#
set(CPACK_SOURCE_PACKAGE_FILE_NAME "thirdparty-package_1.0")
set(CPACK_SOURCE_GENERATOR "TGZ")
set(CPACK_SOURCE_IGNORE_FILES ".git/;build/;.vs/;out/;CMakeLists.txt.user")
include(CPack)
