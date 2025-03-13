
add_executable(sender sender.cpp)

target_link_libraries(sender PRIVATE workflow-shared)