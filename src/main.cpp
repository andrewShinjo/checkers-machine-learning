#include <iostream>

/**
 * Bitboard representation of checkers board.
 * A checkers board has 64 cells, but only 32 are actually used.
 * Therefore, we can represent the position of each piece using a 32-bit integer.
 */
struct Board
{
  uint32_t white_regular_pieces;
  uint32_t white_king_pieces;
  uint32_t black_regular_pieces;
  uint32_t black_king_pieces;
};

int main()
{
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
