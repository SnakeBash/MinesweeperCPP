#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <iomanip>
#include <random>

#ifndef GAME_H
#define GAME_H

static constexpr int BOARD_SIZE = 8;

class Board
{
    public :

    void DrawBoard();
    void PlaceMines();

    private :

    std::array<std::array<int, BOARD_SIZE>, BOARD_SIZE> board{};
    

};
#endif