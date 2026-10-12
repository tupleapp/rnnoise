#include "rnnoise_2025.h"

/* Leave the float copy of the weights out, as configure does by default */
#define DISABLE_DEBUG_FLOAT

#define RNNOISE_EXPORT static
#include "rnnoise.h"

#include "celt_lpc.c"
#include "denoise.c"
#include "kiss_fft.c"
#include "nnet.c"
#include "nnet_default.c"
#include "parse_lpcnet_weights.c"
#include "pitch.c"
#include "rnn.c"
#include "rnnoise_data.c"
#include "rnnoise_tables.c"

Rnnoise2025State* rnnoise_2025_create(void) {
    return (Rnnoise2025State*) rnnoise_create(NULL);
}

void rnnoise_2025_destroy(Rnnoise2025State* state) {
    rnnoise_destroy((DenoiseState*) state);
}

float rnnoise_2025_process_frame(Rnnoise2025State* state, float* out, const float* in) {
    return rnnoise_process_frame((DenoiseState*) state, out, in);
}
