add_library(filesystem_service )
target_link_libraries(filesystem_service
        PRIVATE fmtd
        PRIVATE spdlogd)