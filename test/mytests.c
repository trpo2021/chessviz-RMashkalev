#include "ctest.h"
#include "../src/pawn.h"

CTEST(test, turn_test)
{
    const int expected = 0;
    char turn[6] = {101,50,45,101,52};
    const int result = turncheck(turn);
    ASSERT_EQUAL(expected, result);
}