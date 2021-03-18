add_library(image_importer image_importer.cpp)
add_link_options(image_importer
        PRIVATE fmtd
        PRIVATE spdlogd
        PRIVATE boost)