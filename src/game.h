#pragma once

#include "./board.h"

enum GameState {
  WHITE_WIN,
  BLACK_WIN,
  DRAW,
  IN_PROGRESS
};

struct Game {
  Board board;
  bool white_turn;
  GameState game_state;
}
