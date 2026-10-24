#include "common.h"

typedef struct {
    u8 f00[0xBC];
    s32 fBC;
    s32 fC0;
} Type1;

extern Type1 D_00172160;

void func_0015CB10(s32 arg0, s32 arg1) {
    D_00172160.fBC = arg0;
    D_00172160.fC0 = arg1;
}
