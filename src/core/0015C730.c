#include "common.h"

typedef struct {
    u8 f00[0x484];
    s32 f484;
    u8 f488[4];
    s32 f48C;
} Type1;

extern Type1 D_00172160;

void func_0015C730(void) {
    D_00172160.f48C = 0;
    D_00172160.f484 = 0;
}
