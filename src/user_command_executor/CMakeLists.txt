add_library(user_command_executor src/user_command_executor.cpp)
target_include_directories(user_command_executor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(user_command_executor
        PRIVATE fmt
        PRIVATE spdlog
        PRIVATE network_service
        PRIVATE image_manipulation_service
        PRIVATE image_storing_service)