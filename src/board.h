#pragma once
#include <cstdint>

/**
 * Bitboard representation of checkers board.
 * A checkers board has 64 cells, but only 32 are actually used.
 * Therefore, we can represent the position of each piece using a 32-bit integer.
 */
struct Board
{
  Board();
  uint64_t white_regular_pieces;
  uint64_t white_king_pieces;
  uint64_t black_regular_pieces;
  uint64_t black_king_pieces;
};

/**
 * Instatiates the deafult game board.
 */
Board *new_board();

/**
 * Print the checkers board on the terminal.
 */
void print_board(Board *board);
