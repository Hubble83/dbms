/*
 * Copyright (c) 2017 João Afonso. All rights reserved.
 */
#ifndef ENGINE_INCLUDE_MATRIX_HH_
#define ENGINE_INCLUDE_MATRIX_HH_
#include <vector>
#include "../src/block.h"

namespace engine {

class matrix {
 public:
  matrix();
  virtual ~matrix();

 private:
  int nnz;
  int ncols;
  int nrows;
  std::vector<block> blocks;
  std::vector<int> disk_block_offsets;
}  // class matrix
}  // namespace engine

#endif  // ENGINE_INCLUDE_MATRIX_HH_
