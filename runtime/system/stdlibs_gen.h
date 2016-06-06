/*
 * stdlibs_gen.h
 */

#ifndef STDLIBS_GEN_H
#define STDLIBS_GEN_H

int b6_native_setenv_native_SSI(B6Vm *vm, B6String *name, B6String *value,
                                int overwrite);
void b6_native_debug_VS(B6Vm *vm, B6String *message);
void b6_native_test_debug_VS(B6Vm *vm, B6String *message);
void test_debug(const char *message);

#endif /* not STDLIBS_GEN_H */
