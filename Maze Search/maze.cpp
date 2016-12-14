#include "maze.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// DESTRUCTOR
// ~ is the tilde symbol
Maze::~Maze() {
    // modify the code to take care of isVisited
    if (grid != NULL) {
        for (int row = 0; row < rows; row++)
            delete grid[row];
        delete grid;
    }
}

// CONSTRUCTOR
Maze::Maze() {
    grid = NULL;
    rows = 0;
    cols = 0;
    startRow = -1;
    startCol = -1;
    exitRow = -1;
    exitCol = -1;
}

Maze::Maze(int rows, int cols) {
    grid = new char*[rows];
    for (int row = 0; row < rows; row++)
        grid[row] = new char[cols];
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
    grid = new char*[rows];
    for (int row = 0; row < rows; row++)
        grid[row] = new char[cols];
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
    isVisited = new bool*[rows];
    for (int row = 0; row < rows; row++) {
        isVisited[row] = new bool[cols];
        for (int col = 0; col < cols; col++)
            isVisited[row][col] = false;
    }

    return isSolvable(startRow, startCol);
}

bool Maze::isSolvable(int currentRow, int currentCol) {
    //cout << "Visiting " << currentRow << " " << currentCol << endl;

    if (currentRow < 0 || currentCol < 0
            || currentRow >= rows || currentCol >= cols)
        return false;
    if (isVisited[currentRow][currentCol])
        return false;
    if (grid[currentRow][currentCol] == '#')
        return false;
    if (grid[currentRow][currentCol] == 'E')
        return true;

    isVisited[currentRow][currentCol] = true;

    // GO DOWN
    if (isSolvable(currentRow + 1, currentCol))
        return true;
    // GO RIGHT
    if (isSolvable(currentRow, currentCol + 1))
        return true;
    // GO UP
    if (isSolvable(currentRow - 1, currentCol))
        return true;
    // GO LEFT
    if (isSolvable(currentRow, currentCol - 1))
        return true;
}
