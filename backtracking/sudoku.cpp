// A program to solve sudoku using backtracking algorithm

#include <iostream>
#include <map>
#include <algorithm>
#include <array>

constexpr int GRID_SIZE = 9;

class Grid {
    private:
        // Create a solvable sudoku grid
        std::array<std::array<int, GRID_SIZE>, GRID_SIZE> grid = {{
            { 3, 1, 6, 5, 7, 8, 4, 9, 2 },
            { 5, 2, 9, 1, 3, 4, 7, 6, 8 },
            { 4, 8, 7, 6, 2, 9, 5, 3, 1 },
            { 2, 6, 3, 0, 1, 5, 9, 8, 7 },
            { 9, 7, 4, 8, 6, 0, 1, 2, 5 },
            { 8, 5, 1, 7, 9, 2, 6, 4, 3 },
            { 1, 3, 8, 0, 4, 7, 2, 0, 6 },
            { 6, 9, 2, 3, 5, 1, 8, 7, 4 },
            { 7, 4, 5, 0, 8, 6, 3, 1, 0 }
        }};

        bool check() {
            // Function to check if sudoku grid is solved
            std::array<std::map<int, int>, GRID_SIZE> rows;
            std::array<std::map<int, int>, GRID_SIZE> cols;
            std::array<std::array<std::map<int, int>,3>,3> boxes;

            for (int row = 0; row < GRID_SIZE; ++row) {
                for (int col = 0; col < GRID_SIZE; ++col) {
                    rows[row][grid[row][col]] += 1;
                    cols[col][grid[row][col]] += 1;
                    boxes[row/3][col/3][grid[row][col]] += 1;

                    // If any of the numbers repeats in row/column/box, mark solution as wrong
                    if (rows[row][grid[row][col]] > 1 ||
                        cols[col][grid[row][col]] > 1 ||
                        boxes[row/3][col/3][grid[row][col]] > 1) {
                            return false;
                    }
                }
            }
            return true;
        }
    public:
        void print() {
            // Print the sudoku grid
            for (const auto &row: grid) {
                for (short i = 0; i < GRID_SIZE; ++i) {
                    std::cout << "+---";
                }
                std::cout << "+\n";
                for (const auto &col: row) {
                    std::cout << "| " << col << ' ';
                }
                std::cout << "|\n";
            }
            for (short i = 0; i < GRID_SIZE; ++i) {
                std::cout << "+---";
            }
            std::cout << '+' << std::endl;
        }
        bool solve(int row, int col) {
            // A recursive funciton that is used to solve the grid
            if (row == GRID_SIZE - 1 && col == GRID_SIZE) {
                // If we' re on last row and colum of the grid, check if it's solved correctly
                if (check())
                    return true;
                return false;
            }
            if (col == GRID_SIZE) {
                // Go to next row
                ++row;
                col = 0;
            }
            if (grid[row][col] != 0) {
                // If pole is not empty, leave it as it is
                return solve(row, col+1);
            }
            for (int num = 1; num <= 9; ++num) {
                // Try numbers from 1 to 9 as a solution of the pole
                grid[row][col] = num;
                if (solve(row, col+1))
                    return true;
                grid[row][col] = 0;
            }
            return false;
        }
};

int main() {
    Grid grid = Grid();
    std::cout << "Input: " << std::endl;
    grid.print();
    grid.solve(0, 0);
    std::cout << "Solution: " << std::endl;
    grid.print();
}