/* The January 2025 rnnoise model behind three functions, so it links next to another rnnoise.
   rnnoise_2025.c builds the library as one translation unit and keeps the rnnoise.h API inside it. */
#ifndef RNNOISE_2025_H
#define RNNOISE_2025_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Rnnoise2025State Rnnoise2025State;

Rnnoise2025State* rnnoise_2025_create(void);
void rnnoise_2025_destroy(Rnnoise2025State*);
float rnnoise_2025_process_frame(Rnnoise2025State*, float* out, const float* in);

#ifdef __cplusplus
}
#endif

#endif
