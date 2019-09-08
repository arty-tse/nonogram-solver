#include "puzzle.hpp"

// Puzzle constructor
Puzzle::Puzzle(int nCols, int nRows, std::vector<std::vector<int>> cols, std::vector<std::vector<int>> rows)
{
    s_nCols = nCols;
    s_nRows = nRows;
    s_cols = cols;
    s_rows = rows;
}

// solve a puzzle by drawing the solved puzzle
std::vector<std::vector<char>> Puzzle::solve()
{
    // Initialize unsolved puzzle
    std::vector<std::vector<char>> solved;
    for (int i = 0; i < s_nRows; ++i)
    {
        std::vector<char> row;
        for (int j = 0; j < s_nCols; ++j)
        {
            row.push_back('?');
        }
        solved.push_back(row);
    }

    // Solve what can be solved
    for (int i = 0; i < s_nRows; ++i)
    {
        std::vector<int> clue = s_rows[i];
        int sum = clue.size() - 1;
        for (int j = 0; j < clue.size(); ++j)
        {
            sum += clue[j];
        }

        if (sum == s_nCols)
        {
            int j = 0;
            for (int k = 0; k < clue.size(); ++k)
            {
                for (int l = 0; l < clue[k]; ++l)
                {
                    solved[i][j] = 'X';
                    ++j;
                }
                if (j < sum)
                {
                    solved[i][j] = ' ';
                    ++j;
                }
            }
        }
    }

    for (int i = 0; i < s_nCols; ++i)
    {
        std::vector<int> clue = s_cols[i];
        int sum = clue.size() - 1;
        for (int j = 0; j < clue.size(); ++j)
        {
            sum += clue[j];
        }

        if (sum == s_nRows)
        {
            int j = 0;
            for (int k = 0; k < clue.size(); ++k)
            {
                for (int l = 0; l < clue[k]; ++l)
                {
                    solved[j][i] = 'X';
                    ++j;
                }
                if (j < sum)
                {
                    solved[j][i] = ' ';
                    ++j;
                }
            }
        }
    }
    return solved;
}