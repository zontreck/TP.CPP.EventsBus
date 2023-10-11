
find_package(PkgConfig REQUIRED)


# pkg_check_modules(LIBCPPREST REQUIRED libcpprest2.10)

# Add your source files
set(SOURCES
    Event.cpp
    EventBus.cpp
    ServerTickEvent.cpp
    StatisticsUpdateEvent.cpp
)

set(HEADERS
    Event.h
    EventBus.h
    ServerTickEvent.h
    StatisticsUpdateEvent.h
)

set(INCLUDE_OUTPUT_DIR ${CMAKE_BINARY_DIR}/includes)
set(LIB_OUTPUT_DIR ${CMAKE_BINARY_DIR}/lib)

file(COPY ${HEADERS} DESTINATION ${INCLUDE_OUTPUT_DIR})

add_library(TP.CPP.EventsBus ${SOURCES})


set_target_properties(TP.CPP.EventsBus PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR})
export(TARGETS TP.CPP.EventsBus FILE TP.CPP.EventsBusConfig.cmake)

install (TARGETS TP.CPP.EventsBus DESTINATION /usr/local/lib)
install (FILES ${HEADERS} DESTINATION /usr/local/include/tpeventbus)