#include <iostream>
#include <cstdlib>
#include "node.h"
#include "linkedlist.cpp"
using namespace std;

int main() {
    LinkedList list;
    list.insertAtFront(17);
    list.insertAtFront(27);
    list.insertAtFront(37);
    list.insertAtFront(7);
    list.insertAtFront(52);
    list.print();
    return 0;
}
