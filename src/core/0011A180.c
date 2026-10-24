#include "common.h"

extern u8 D_00191F01[];

// Character class table lookup: add 0x20 when the character's entry in the
// table at 0x191F01 has bit 0x01 set (upper-case to lower-case), else keep it.
s32 func_0011A180(s32 c) {
    return (D_00191F01[c] & 1) ? c + 0x20 : c;
}
