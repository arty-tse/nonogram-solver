#ifndef PUZZLE_H
#define PUZZLE_H

#include <string>
#include <vector>

class Puzzle
{
private:
  int s_nCols;
  int s_nRows;
  std::vector<std::string> s_cols;
  std::vector<std::string> s_rows;

public:
  Puzzle(int nCols, int nRows, std::vector<std::string> cols, std::vector<std::string> rows);

  std::vector<std::vector<char>> solve();

  int getNumCols() { return s_nCols; }
  int getNumRows() { return s_nRows; }
  std::vector<std::string> getCols() { return s_cols; }
  std::vector<std::string> getRows() { return s_rows; }
};

#endif
