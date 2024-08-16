add_executable(sandbox)
file(GLOB_RECURSE SANDBOX_SOURCE_FILES
        sandbox/*.cpp
)
target_sources(sandbox
        PRIVATE
        ${SANDBOX_SOURCE_FILES}
)
target_link_libraries(sandbox
        PRIVATE
        star
)
