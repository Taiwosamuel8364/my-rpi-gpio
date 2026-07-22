#include "board_bcm.h"

static const int board_to_bcm[41] = {
    -1, -1, -1, 2, -1, 3, -1, 4, 14, -1, 15, 17, 18, 27, -1, 24, 10, -1, 9, 25, 11, 8, -1, 7, 0, 1, 5, -1, 6, 12, 13, -1, 19, 16, 26, 20, -1, 21
}

int board_pin_to_bcm(int board_pin)
{
    if (board_pin < 1 || board_pin > 40)
        return -1;
    return board_to_bcm[board_pin];
}