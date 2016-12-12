#include "maze.h"
#include <iostream>
using namespace std;

Maze::Maze() {
    rows = 0;
    cols = 0;
    startRow = -1;
    startCol = -1;
    exitRow = -1;
    exitCol = -1;
}

Maze::Maze(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    startRow = -1;
    startCol = -1;
    exitRow = -1;
    exitCol = -1;
}

void Maze::readMaze() {
    cin >> rows;
    cin >> cols;
    for (int row = 0; row < rows; row++)
        for (int col = 0; col < cols; col++) {
            cin >> grid[row][col];
            if (grid[row][col] == 'S') {
                startRow = row;
                startCol = col;
            } else if (grid[row][col] == 'E') {
                exitRow = row;
                exitCol = col;
            }
        }
}

void Maze::printMaze() {
    cout << "Maze " << rows << "x" << cols << endl;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++)
            cout << grid[row][col];
        cout << endl;
    }
    cout << "Start (" << startRow << ", " << startCol << ")" << endl;
    cout << "Exit  (" << exitRow << ", " << exitCol << ")" << endl;
}

bool Maze::isSolvable() {
    return isSolvable(startRow, startCol);
}

bool Maze::isSolvable(int currentRow, int currentCol) {
    if (currentRow < 0 || currentCol < 0
            || currentRow >= rows || currentCol >= cols)
        return false;
    if (grid[currentRow][currentCol] == '#')
        return false;
    if (grid[currentRow][currentCol] == 'E')
        return true;

    if (isSolvable(currentRow + 1, currentCol))
        return true;
    if (isSolvable(currentRow, currentCol + 1))
        return true;
    if (isSolvable(currentRow - 1, currentCol))
        return true;
    if (isSolvable(currentRow, currentCol - 1))
        return true;
}
