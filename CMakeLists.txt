set(
  SOURCES
  include/rnnoise.h
  src/_kiss_fft_guts.h
  src/arch.h
  src/celt_lpc.c
  src/celt_lpc.h
  src/common.h
  src/denoise.c
  src/kiss_fft.c
  src/kiss_fft.h
  src/opus_types.h
  src/pitch.c
  src/pitch.h
  src/rnn.c
  src/rnn.h
  src/rnn_data.c
  src/rnn_data.h
  src/rnn_reader.c
  src/tansig_table.h
)

# Build rnnoise
add_definitions(-DRNNOISE_BUILD)

# Compile the library
add_library(rnnoise ${SOURCES})

# Include dirs
target_include_directories(rnnoise PUBLIC
        ${rnnoise_project_SOURCE_DIR}/include
        include
        PRIVATE ${rnnoise_project_SOURCE_DIR}/src)
