#ifndef __NODE_H_
#define __NODE_H_
class Node {
private:
    int key;
    Node *p;
    Node *left;
    Node *right;

public:
    Node();
    Node(int key);

    int getKey();
    Node* getParent();
    Node* getLeft();
    Node* getRight();

    void setKey(int key);
    void setParent(Node* p);
    void setLeft(Node* left);
    void setRight(Node* right);
};
#endif
