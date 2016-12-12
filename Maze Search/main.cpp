#include "maze.h"
#include <iostream>
using namespace std;

int main() {
    Maze m;
    m.readMaze();
    m.printMaze();
    if (m.isSolvable())
        cout << "Maze is solvable" << endl;
    else cout << "Maze is not solvable" << endl;
    return 0;
}
