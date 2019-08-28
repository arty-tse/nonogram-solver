#ifndef PUZZLE_H
#define PUZZLE_H

#include <vector>

class Puzzle
{
private:
  int s_nCols;
  int s_nRows;
  std::vector<std::vector<int>> s_cols;
  std::vector<std::vector<int>> s_rows;

public:
  Puzzle(int nCols, int nRows, std::vector<std::vector<int>> cols, std::vector<std::vector<int>> rows);

  std::vector<std::vector<char>> solve();

  int getNumCols() { return s_nCols; }
  int getNumRows() { return s_nRows; }
  std::vector<std::vector<int>> getCols() { return s_cols; }
  std::vector<std::vector<int>> getRows() { return s_rows; }
};

#endif
