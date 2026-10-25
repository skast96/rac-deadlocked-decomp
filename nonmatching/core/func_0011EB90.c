/* Not matching yet: BYTES 9/40 (return sign-extension scheduled before ra reload; tools/try_func.py func_0011EB90 --diff) (tools/try_func.py func_0011EB90 --diff). Not part of the build. */
extern s64 func_00126718(void *, s32, s32);

s64 func_0011EB90(void *arg0) {
    return (s32)func_00126718(arg0, 0, 10);
}
