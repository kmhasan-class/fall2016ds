#ifndef __MAZE_H_
#define __MAZE_H_
class Maze {
private:
    int rows;
    int cols;
    int startRow, startCol;
    int exitRow, exitCol;
    // char grid[100][100];
    char** grid;
    bool** isVisited;

public:
    ~Maze();
    Maze();
    Maze(int rows, int cols);
    void readMaze();
    void printMaze();
    bool isSolvable();
    bool isSolvable(int currentRow, int currentCol);
};
#endif
