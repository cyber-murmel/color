#include <stdint.h>

typedef union {
    uint32_t u32;
    uint8_t arr[4];
    struct {
        uint8_t r;
        uint8_t g;
        uint8_t b;
        uint8_t w;
    } rgbw;
} color_t;

