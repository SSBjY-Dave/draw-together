add_executable(DrawTogether src/main.cpp)
target_link_libraries(DrawTogether
        PRIVATE fmt
        PRIVATE spdlog
        PRIVATE user_command_executor)