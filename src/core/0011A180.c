#include "common.h"

extern u8 D_00191F01[];

s32 func_0011A180(s32 arg0) {
    return (D_00191F01[arg0] & 1) ? arg0 + 0x20 : arg0;
}
