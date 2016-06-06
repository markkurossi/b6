/*
 * stdlibs_impl.c
 *
 * The implementations of the native method of the `sdblibs.b6' file.
 */

#include <stdio.h>
#include <b6.h>

void
b6_native_debug_VS(B6Vm *vm, B6String *message)
{
  b6_vm_debug(message);
}

void
test_debug(const char *message)
{
  fprintf(stderr, "test_debug: %s\n", message);
}
