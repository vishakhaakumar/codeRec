add_executable(
    RecommenderService
    RecommenderService.cpp
    ${THRIFT_GEN_CPP_DIR}/RecommenderService.cpp
    ${THRIFT_GEN_CPP_DIR}/media_service_types.cpp
)

target_include_directories(
    RecommenderService PRIVATE
)

target_link_libraries(
    RecommenderService
    nlohmann_json::nlohmann_json
    ${THRIFT_LIB}
    ${CMAKE_THREAD_LIBS_INIT}
    ${Boost_LIBRARIES}
    Boost::log
    Boost::log_setup
)

install(TARGETS RecommenderService DESTINATION ./)
