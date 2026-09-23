#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <iomanip>
#include <random>

#ifndef GAME_H
#define GAME_H

static constexpr int BOARD_SIZE = 8;
static const std::string DEFAULT_CELL_VALUE = "?";
class Cell
{
    public :

    Cell() = default;
    Cell(int x, int y);

    private :

    bool isMined{false};
    bool isRevealed{false};
    Cell* neighbors[9]{nullptr};
    int x {0};
    int y {0};

};

class Board
{
    public :

    void DrawBoard();
    void PlaceMines();

    private :

    std::array<std::array<Cell, BOARD_SIZE>, BOARD_SIZE> board{};
};

#endif