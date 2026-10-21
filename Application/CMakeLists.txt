file(GLOB_RECURSE APPLICATION_SRC CONFIGURE_DEPENDS "*.h" "*.c" "*.hpp" "*.cpp")

add_executable(Application
	${APPLICATION_SRC}
)

set_target_properties(Application PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
	CXX_EXTENSIONS OFF
	C_STANDARD 17
	C_STANDARD_REQUIRED ON
	C_EXTENSIONS OFF
	OUTPUT_NAME Application
)

target_include_directories(Application
	PUBLIC

	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/src
)

cmake_base_configure_target(Application)
cmake_base_apply_target_definitions(Application APPLICATION)
cmake_base_apply_os_definitions_to_target(Application APPLICATION)
cmake_base_apply_architecture_definitions_to_target(Application APPLICATION)
cmake_base_apply_compiler_definitions_to_target(Application APPLICATION)
cmake_base_apply_sanitizers(Application SANITIZERS ASAN UBSAN CONFIGS Debug)

# POST-BUILD RESOURCE COPY
add_custom_command(
	TARGET Application POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
		"${CMAKE_CURRENT_SOURCE_DIR}/res"
		"$<TARGET_FILE_DIR:Application>/res"
	COMMENT "Copying resource folder to binary directory"
)
