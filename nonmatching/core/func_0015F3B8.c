/* Not matching yet: BYTES 1/52 (tools/try_func.py func_0015F3B8 build/try/func_0015F3B8/p2.c --diff).
 * The only difference is the source-register order in the commutative address addu at +0x10. */
#include "common.h"

extern s32 D_00172160[];

void func_0015F3B8(s32 arg0) {
    s32 *base = D_00172160;
    s32 index = base[0x57B];

    base[0x56B + index] = arg0;
    index++;
    base[0x57B] = index;
    if (index >= 16) {
        base[0x57B] = 0;
    }
}
