#include "common.h"

extern void func_00120378(s32 *);
extern void func_0011EF60(s32);
extern s32 D_0021DFC8;

void func_0015DAC8(s32 arg0) {
    s32 sp[12];

    func_00120378(sp);
    D_0021DFC8 = sp[7] + arg0;
    func_0011EF60(arg0);
}
