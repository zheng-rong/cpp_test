cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
set(CMAKE_LEGACY_CYGWIN_WIN32 0)
project("test_project")

enable_testing()


add_executable(todo_exe	main.cc
			todo.cc)

add_test(todotest todo_exe)




