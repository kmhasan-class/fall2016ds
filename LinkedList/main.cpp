#include <iostream>
#include <cstdlib>
#include "node.h"
#include "linkedlist.h"
using namespace std;

int main() {
    LinkedList list;
    list.insertAtFront(17);
    list.insertAtFront(27);
    list.insertAtFront(37);
    list.insertAtFront(7);
    list.insertAtFront(52);
    list.print();
    cout << "Address of 7 " << list.search(7) << endl;
    cout << "Address of 79 " << list.search(79) << endl;
    cout << "removing " << list.removeFromFront() << endl;
    cout << "removing " << list.removeFromFront() << endl;
    list.insertAfter(27, 62);
    list.print();
    return 0;
}
