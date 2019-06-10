project(multi_context)

set(SOURCE_LIST "${PROJECT_SOURCE_DIR}/main.cpp")

add_executable(${PROJECT_NAME} ${SOURCE_LIST})

if(APPLE)
    add_definitions(-D_BUILD_APPLE)
endif(APPLE)
if(WIN32)
    add_definitions(-D_BUILD_APPLE)
endif(WIN32)

target_link_libraries(${SAMPLE_NAME} PRIVATE "glfw")
target_link_libraries(${SAMPLE_NAME} PRIVATE "glad")
set_target_properties(${SAMPLE_NAME} PROPERTIES PROJECT_LABEL ${SAMPLE_NAME})
set_target_properties(${SAMPLE_NAME} PROPERTIES FOLDER "cases")
