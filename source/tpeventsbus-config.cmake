get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
include(${SELF_DIR}/tpeventsbus-targets.cmake)
get_filename_component(tpeventsbus_INCLUDE_DIRS "${SELF_DIR}/../../include/tpeventsbus" ABSOLUTE)
