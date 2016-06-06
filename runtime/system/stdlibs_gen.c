/*
 * stdlibs_gen.c
 */

#include <b6.h>

int
b6_native_setenv_native_SSI(B6Vm *vm, B6String *name, B6String *value,
                            int overwrite)
{
  const char *name_utf8 = b6_string_get_utf8(vm, name);
  const char *value_utf8 = b6_string_get_utf8(vm, value);
  int result = 0;

  if (name_utf8 == NULL || value_utf8 == NULL)
    {
      b6_throw(vm, vm->out_of_memory_error, "Failed to get string UTF-8 data");
      goto cleanup
    }

  result = setenv(name_utf8, value_utf8, overwrite);

 cleanup:

  b6_string_release_utf8(vm, name, name_utf8);
  b6_string_release_utf8(vm, value, value_utf8);

  return result;
}

void
b6_native_test_debug_VS(B6Vm *vm, B6String *message)
{
  const char *message_utf8 = b6_string_get_utf8(vm, message);

  if (message_utf8 == NULL)
    {
      b6_throw(vm, vm->out_of_memory_error, "Failed to get string UTF-8 data");
      goto cleanup
    }

  test_debug(message_utf8);

 cleanup:

  b6_string_release_utf8(vm, message, message_utf8);
}
