
find_package(PkgConfig REQUIRED)


# pkg_check_modules(LIBCPPREST REQUIRED libcpprest2.10)

# Add your source files
set(SOURCES
    Event.cpp
    EventBus.cpp
    EventBusStatistics.cpp
    ServerTickEvent.cpp
    StatisticsUpdateEvent.cpp
)

set(HEADERS
    Event.h
    EventBus.h
    EventBusStatistics.h
    ServerTickEvent.h
    StatisticsUpdateEvent.h
)

set(INCLUDE_OUTPUT_DIR ${CMAKE_BINARY_DIR}/includes)
set(LIB_OUTPUT_DIR ${CMAKE_BINARY_DIR}/lib)

file(COPY ${HEADERS} DESTINATION ${INCLUDE_OUTPUT_DIR})

add_library(tpeventsbus STATIC ${SOURCES})


set_target_properties(tpeventsbus PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR})
export(TARGETS tpeventsbus FILE tpeventsbusConfig.cmake)

install (
    TARGETS tpeventsbus
    EXPORT tpeventsbus
    LIBRARY DESTINATION lib/tpeventsbus
    ARCHIVE DESTINATION lib/tpeventsbus
    RUNTIME DESTINATION bin/tpeventsbus
)
install (FILES ${HEADERS} DESTINATION include/tpeventbus)