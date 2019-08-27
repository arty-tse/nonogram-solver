#include "puzzle.hpp"

// Puzzle constructor
Puzzle::Puzzle(int nCols, int nRows, std::vector<std::string> cols, std::vector<std::string> rows)
{
    s_nCols = nCols;
    s_nRows = nRows;
    s_cols = cols;
    s_rows = rows;
}

// solve a puzzle by drawing the solved puzzle
std::vector<std::vector<char>> Puzzle::solve()
{
    std::vector<std::vector<char>> solved;
    for (int i = 0; i < s_nRows; ++i)
    {
        std::vector<char> row;
        for (int j = 0; j < s_nCols; ++j)
        {
            row.push_back('*');
        }
        solved.push_back(row);
    }
    return solved;
}