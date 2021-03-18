# find_package(
#     Qt6 COMPONENTS Widgets REQUIRED
# )
add_executable(DrawTogether
    src/main.cpp
    src/drawtogether.cpp
    src/drawtogether.ui
    src/renderarea.cpp
    src/colorwheel.cpp
)
target_link_libraries(DrawTogether
        PRIVATE fmtd
        PRIVATE spdlogd
        # PRIVATE user_command_executor
        PRIVATE Qt6Widgetsd
)

