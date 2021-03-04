add_subdirectory(components/message_serialization)
add_subdirectory(components/payload_compression)
add_subdirectory(components/mqtt_client)

add_library(network_service src/network_service.cpp)
target_include_directories(network_service PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(network_service
        PRIVATE fmt
        PRIVATE spdlog
        PRIVATE message_serialization)