# Technical Context: Checkers with Machine Learning

## Core Technologies
- C++17
- Standard library features:
  - Enums for game state representation
  - Smart pointers for resource management
  - STL containers for board structure
- Future ML considerations:
  - LibTorch C++ API
  - Eigen for linear algebra
  - JSON for Modern C++ for serialization

## Development Setup
- CMake as build system
- Standard C++ toolchain (g++/clang++)
- Initial phase: Minimal dependencies
- ML phase: Will add LibTorch, Eigen, etc.

## Implementation Patterns
- Using enums for game pieces (BlackRegular, BlackKing, etc.)
- 2D array for board representation
- Optional/Pointer for square states
- Type aliases for readability
- ML-focused patterns:
  - Game state snapshots
  - Move generation tracking
  - Outcome recording

## Key C++ Concepts in Use
- RAII for resource management
- Strong typing
- Standard Template Library
- Move semantics
- Efficient data structures for ML training
