#include "Game.h"

void Board::DrawBoard()
{
    std::cout << "  ";

    for (int i = 1; i < BOARD_SIZE + 1; i++)
    {
        std::cout << std::setw(3) << i;
    }

    std::cout << std::endl;

    int x{1};

    while (x < BOARD_SIZE + 1)
    {
        std::cout << "  ";
        
        for (int i = 0; i < BOARD_SIZE + 1; i++)
        {
            std::cout << '+';
            std::cout << std::setfill('-') << std::setw(3);
        }

        std::cout << std::setfill(' ') << std::setw(1) << std::endl;
        std::cout << x << ' ';

        for (int i = 0; i < BOARD_SIZE; i++)
        {
            std::cout << "| ";
            std::cout << DEFAULT_CELL_VALUE << std::setw(2);
        }

        std::cout << std::setfill(' ') << std::setw(1) << "|" << std::endl;
        x++;
    }

        std::cout << "  ";

        for (int i = 0; i < BOARD_SIZE + 1; i++)
        {
            std::cout << '+';
            std::cout << std::setfill('-') << std::setw(3);
        }
}

Cell::Cell(int x, int y)
{
    this->x = x;
    this->y = y;
}

int main()
{
    Board board{};

    board.DrawBoard();

    return 0;
}