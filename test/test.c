#include <ctest.h>
#include "libnim/functions.h"

CTEST(display_heaps_test, test1)
{
    ASSERT_EQUAL(display_heaps(3, 2, 1), 0);
}

CTEST(is_game_over_test, test1)
{
    ASSERT_EQUAL(is_game_over(0, 0, 0), 1);
    ASSERT_EQUAL(is_game_over(0, 0, 1), 0);
}

CTEST(update_heap_test, test1)
{
    int a = 3, b = 2, c = 1;
    ASSERT_EQUAL(update_heap(&a, &b, &c, 'A', 2), 1);
    ASSERT_EQUAL(a, 1);
    ASSERT_EQUAL(update_heap(&a, &b, &c, 'B', 1), 1);
    ASSERT_EQUAL(b, 1);
    ASSERT_EQUAL(update_heap(&a, &b, &c, 'C', 1), 0);
    ASSERT_EQUAL(c, 1);
    ASSERT_EQUAL(update_heap(&a, &b, &c, 'D', 1), 0);
    ASSERT_EQUAL(a, 1);
    ASSERT_EQUAL(b, 1);
    ASSERT_EQUAL(c, 1);
}
