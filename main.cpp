#include <iostream>
#include "puzzle.hpp"

int main()
{
  int nCols = 5;
  int nRows = 5;
  std::vector<std::string> cols{"5", "2,2", "1,1", "2,2", "5"};
  std::vector<std::string> rows{"5", "2,2", "1,1", "2,2", "5"};

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
