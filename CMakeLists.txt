add_library(rnnoise_2025 STATIC rnnoise_2025.c)
target_include_directories(rnnoise_2025 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} PRIVATE include src)
