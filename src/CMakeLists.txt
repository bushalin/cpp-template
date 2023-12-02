# Define a function for creating executable targets
file(GLOB_RECURSE SOURCES "${SRC_DIR}/app/*.cpp*")
function(create_target TARGET_NAME SOURCE_FILE)
    add_executable(
        ${TARGET_NAME}
        ${SRC_DIR}
        ${SOURCES}
        ${SOURCE_FILE}
    )

    target_link_libraries(
        ${TARGET_NAME}
        # ${BUFFER_LIB_FILE}
        # ${EXTERNAL_LIB_FILES}
        # ${WRAPPER_LIBS}
        dl
    )
endfunction()

create_target(${APP_NAME} ${SRC_DIR}/main.cpp)
# create_target(${UNIVERSAL_ASYNC_APP} ${SRC_DIR}/main/universal_async_main.cpp)
