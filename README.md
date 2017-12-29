
Use me like
```C
#include <stdint.h>
#include <stdio.h>
#include "color.h"

int main(void) {
    color_t color;
    color.rgbw.r = 0x11;
    color.rgbw.g = 0x22;
    color.rgbw.b = 0x33;
    color.rgbw.w = 0x44;
    printf("%08x\n", color.u32);
    printf("%02x%02x%02x%02x\n", color.arr[3], color.arr[2], color.arr[1], color.arr[0]);
    printf("%02x%02x%02x%02x\n", color.rgbw.w, color.rgbw.b, color.rgbw.g, color.rgbw.r);
    return 0;
}
```

