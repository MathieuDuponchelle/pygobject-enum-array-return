#include "test.h"

/**
 * test_enum_array_return_type:
 * @n_members: (out): The number of members
 *
 * Returns: (array length=n_members): An array of enum values
 */
TestEnum *
test_enum_array_return_type (gsize *n_members)
{
  TestEnum *res = g_new0(TestEnum, 2);

  *n_members = 2;

  res[0] = TEST_FOO;
  res[1] = TEST_BAR;

  return res;
}
