set(COMPONENT_NAME sunspec_modbus)

add_executable(${COMPONENT_NAME}
    main.cpp
    common.cpp
    device.cpp
    modbus_adapter.cpp
)

target_link_libraries(${COMPONENT_NAME} PUBLIC 
    modbus_tcp
    pthread
)

target_include_directories(${COMPONENT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    ${modbus_tcp_INCLUDE_DIRS}/include
)