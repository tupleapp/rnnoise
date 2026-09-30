set(
  SOURCES
  include/rnnoise.h
  src/_kiss_fft_guts.h
  src/arch.h
  src/celt_lpc.c
  src/celt_lpc.h
  src/common.h
  src/cpu_support.h
  src/denoise.c
  src/denoise.h
  src/kiss_fft.c
  src/kiss_fft.h
  src/nnet.c
  src/nnet.h
  src/nnet_arch.h
  src/nnet_default.c
  src/opus_types.h
  src/parse_lpcnet_weights.c
  src/pitch.c
  src/pitch.h
  src/rnn.c
  src/rnn.h
  src/rnnoise_data.c
  src/rnnoise_data.h
  src/rnnoise_tables.c
  src/vec.h
  src/vec_avx.h
  src/vec_neon.h
)

# Build rnnoise
add_definitions(-DRNNOISE_BUILD)

# Compile the library
add_library(rnnoise ${SOURCES})

# Include dirs
target_include_directories(rnnoise PUBLIC include PRIVATE src)
