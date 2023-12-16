/*
 * Author:
 * Date:
 * Name:
 */
// Implementing Red-Black Tree in C++

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *parent;
    Node *left;
    Node *right;
    int color;
};

typedef Node *NodePtr;

class RedBlackTree {
private:
    NodePtr root;
    NodePtr TNULL;


    void printHelper(NodePtr root) {
        // write your code here
    }

public:
    void leftRotate(NodePtr x);
    void rightRotate(NodePtr x);
    NodePtr minimum(NodePtr node);
    void deleteNode(int data);
    void rbTransplant(NodePtr u, NodePtr v);
    void insertFix(NodePtr k);
    void insert(int nodes[], int N);
    void deleteFix(NodePtr x);
    void deleteNodeHelper(NodePtr node, int key);
    void reversePrintTree();
    void numberOfChild();
    int numberOfChildHelper(NodePtr node);
    void printBlackHeight();
    int blackHeightHelper(NodePtr node);
    NodePtr searchTree(int k);
    NodePtr searchTreeHelper(NodePtr node, int key);
    void median();
    void numberOfNode();

    RedBlackTree() {
        TNULL = new Node;
        TNULL->color = 0;
        TNULL->left = nullptr;
        TNULL->right = nullptr;
        root = TNULL;
    }

    void printTree() {
        // write your code here
    }
};
