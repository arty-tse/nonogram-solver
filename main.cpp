#include <iostream>
#include "puzzle.hpp"

int main()
{
  int nCols = 5;
  int nRows = 5;
  std::vector<std::vector<int>> cols{{5}, {2, 2}, {1, 1}, {2, 2}, {5}};
  std::vector<std::vector<int>> rows{{5}, {2, 2}, {1, 1}, {2, 2}, {5}};
  // std::vector<std::vector<int>> cols{{5}, {2, 1}, {1, 2}, {2, 2}, {5}};
  // std::vector<std::vector<int>> rows{{1, 3}, {2, 2}, {3, 1}, {1, 3}, {2, 2}};

  Puzzle puzzle{nCols, nRows, cols, rows};
  std::vector<std::vector<char>> solved = puzzle.solve();
  for (int i = 0; i < nRows; ++i)
  {
    for (int j = 0; j < nCols; ++j)
    {
      std::cout << solved.at(i).at(j) << ' ';
    }
    std::cout << std::endl;
  }
}
