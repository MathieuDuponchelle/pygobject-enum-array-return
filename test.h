#ifndef TEST_H
#define TEST_H

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum
{
  TEST_FOO,
  TEST_BAR
} TestEnum;

TestEnum *test_enum_array_return_type (gsize *n_members);

G_END_DECLS

#endif /* MESON_SUB_SAMPLE_H */
