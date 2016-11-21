#ifndef __NODE_H__
#define __NODE_H__
class Node {
private:
    int data;
    Node* next;
public:
    Node();
    Node(int newdata);
    Node(int newdata, Node* newnext);
    int getData();
    Node* getNext();
    void setData(int newdata);
    void setNext(Node* newnext);
};
#endif
