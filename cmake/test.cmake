add_executable(event_dispatcher_test)
target_link_libraries(event_dispatcher_test
        PRIVATE
        star
)
target_sources(event_dispatcher_test
        PRIVATE
        test/event_dispatcher_test.cpp
)

add_executable(glm_test)
target_link_libraries(glm_test
        PRIVATE
        star
)
target_sources(glm_test
        PRIVATE
        test/glm_test.cpp
)

add_executable(resource_test)
target_link_libraries(resource_test
        PRIVATE
        star
)
target_sources(resource_test
        PRIVATE
        test/resource_test.cpp
)

add_executable(opengl_test)
target_link_libraries(opengl_test
        PRIVATE
        star
)
target_sources(opengl_test
        PRIVATE
        test/opengl_test.cpp
)
