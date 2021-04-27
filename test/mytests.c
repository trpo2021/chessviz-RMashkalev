#include "ctest.h"
#include "../src/pawn.h"

CTEST(test, turn_test1)
{
    const int expected = 0;
    char turn[6] = {101,50,45,101,52};
    const int result = turncheck(turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(test, turn_test2)
{
    const int expected = 0;
    char turn[6] = {101,50,45,101,52};
    const int result = turncheck(turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(test, turn_test3)
{
    const int expected = 1;
    char turn[6] = {96,50,45,101,52};
    const int result = turncheck(turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(test, turn_test4)
{
    const int expected = 1;
    char turn[6] = {101,50,45,101,57};
    const int result = turncheck(turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(figure_test, rookcheck_test1)
{
    const int expected = 0;
    char board[9][9];
    int pawnp[9] = {}, pawnP[9] = {};
    char turn[6] = {97,50,45,97,52};
    board_build(board);
    pawn(board, pawnp, pawnP, turn);

    turn[0] = 97;
    turn[1] = 49;
    turn[3] = 97;
    turn[4] = 51;
    const int result = rookcheck(board, turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(figure_test, rookcheck_test2)
{
    const int expected = 0;
    char board[9][9];
    int pawnp[9] = {}, pawnP[9] = {};
    char turn[6] = {97,55,45,97,53};
    board_build(board);
    pawn(board, pawnp, pawnP, turn);

    turn[0] = 97;
    turn[1] = 56;
    turn[3] = 97;
    turn[4] = 54;
    const int result = rookcheck(board, turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(figure_test, rookcheck_test3)
{
    const int expected = -1;
    char board[9][9];
    char turn[6] = {97,49,45,97,51};
    board_build(board);

    const int result = rookcheck(board, turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(figure_test, rookcheck_test4)
{
    const int expected = -1;
    char board[9][9];
    char turn[6] = {97,56,45,97,54};
    board_build(board);

    const int result = rookcheck(board, turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(figure_test, rookcheck_test5)
{
    const int expected = -1;
    char board[9][9];
    char turn[6] = {104,56,45,104,54};
    board_build(board);

    const int result = rookcheck(board, turn);
    ASSERT_EQUAL(expected, result);
}

CTEST(figure_test, rookcheck_test6)
{
    const int expected = -1;
    char board[9][9];
    char turn[6] = {104,49,45,104,51};
    board_build(board);

    const int result = rookcheck(board, turn);
    ASSERT_EQUAL(expected, result);
}