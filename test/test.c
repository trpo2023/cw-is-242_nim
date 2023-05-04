#include "libnim/functions.h"
#include <ctest.h>

CTEST(display_heaps, test1) {
        ASSERT_EQUAL(0, display_heaps(3, 4, 5));
        ASSERT_EQUAL(0, display_heaps(0, 0, 0));
        ASSERT_EQUAL(0, display_heaps(10, 10, 10));
}

CTEST(is_game_over, test1) {
        ASSERT_EQUAL(0, is_game_over(3, 4, 5));
        ASSERT_EQUAL(1, is_game_over(0, 0, 0));
        ASSERT_EQUAL(1, is_game_over(1, 0, 0));
        ASSERT_EQUAL(1, is_game_over(0, 1, 0));
        ASSERT_EQUAL(1, is_game_over(0, 0, 1));
}

CTEST(update_heap, test1) {
        int a = 3, b = 4, c = 5;
        ASSERT_EQUAL(1, update_heap( & a, & b, & c, 'A', 1));
        ASSERT_EQUAL(0, update_heap( & a, & b, & c, 'A', 0));
        ASSERT_EQUAL(1, update_heap( & a, & b, & c, 'B', 4));
        ASSERT_EQUAL(0, update_heap( & a, & b, & c, 'B', 5));
        ASSERT_EQUAL(0, update_heap( & a, & b, & c, 'D', 5));
        ASSERT_EQUAL(0, update_heap( & a, & b, & c, 'A', -1));
}
