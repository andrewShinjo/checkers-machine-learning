#include <iostream>
#include "board.h"

Board::Board()
{
  white_regular_pieces = 0b101010100101010110101010;
  black_regular_pieces = 0b010101011010101001010101ULL << 40;
  black_king_pieces = 0;
  white_king_pieces = 0;
}

void print_board(Board *board)
{
  uint64_t bit = 1ULL << 63;
  for (int i = 0; i < 64; i++)
  {
    if ((board->black_king_pieces & bit) != 0)
    {
      std::cout << "[" << "B" << "]";
    }
    else if ((board->black_regular_pieces & bit) != 0)
    {
      std::cout << "[" << "b" << "]";
    }
    else if ((board->white_king_pieces & bit) != 0)
    {
      std::cout << "[" << "W" << "]";
    }
    else if ((board->white_regular_pieces & bit) != 0)
    {
      std::cout << "[" << "w" << "]";
    }
    else
    {
      std::cout << "[ ]";
    }

    bit >>= 1;
    bool rowEnd = (i + 1) % 8 == 0;

    if (rowEnd)
    {
      std::cout << std::endl;
    }
  }
}