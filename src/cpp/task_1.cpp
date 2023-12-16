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

//    void initializeNULLNode(NodePtr node, NodePtr parent) {
//        node->data = 0;
//        node->parent = parent;
//        node->left = nullptr;
//        node->right = nullptr;
//        node->color = 0;
//    }

    // Preorder
//    void preOrderHelper(NodePtr node) {
//        if (node != TNULL) {
//            cout << node->data << " ";
//            preOrderHelper(node->left);
//            preOrderHelper(node->right);
//        }
//    }

    // Inorder
//    void inOrderHelper(NodePtr node) {
//        if (node != TNULL) {
//            inOrderHelper(node->left);
//            cout << node->data << " ";
//            inOrderHelper(node->right);
//        }
//    }

    // Post order
//    void postOrderHelper(NodePtr node) {
//        if (node != TNULL) {
//            postOrderHelper(node->left);
//            postOrderHelper(node->right);
//            cout << node->data << " ";
//        }
//    }


    void printHelper(NodePtr root) {
        if (root != TNULL) {
            cout << "(";
            string sColor = root->color ? "RED" : "BLACK";
            cout << root->data << "(" << sColor << ")";
            printHelper(root->left);
            printHelper(root->right);
            cout << ")";
        }
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

//    void preorder() {
//        preOrderHelper(this->root);
//    }

//    void inorder() {
//        inOrderHelper(this->root);
//    }

//    void postorder() {
//        postOrderHelper(this->root);
//    }



//    NodePtr maximum(NodePtr node) {
//        while (node->right != TNULL) {
//            node = node->right;
//        }
//        return node;
//    }

//    NodePtr successor(NodePtr x) {
//        if (x->right != TNULL) {
//            return minimum(x->right);
//        }
//
//        NodePtr y = x->parent;
//        while (y != TNULL && x == y->right) {
//            x = y;
//            y = y->parent;
//        }
//        return y;
//    }

//    NodePtr predecessor(NodePtr x) {
//        if (x->left != TNULL) {
//            return maximum(x->left);
//        }
//
//        NodePtr y = x->parent;
//        while (y != TNULL && x == y->left) {
//            x = y;
//            y = y->parent;
//        }
//
//        return y;
//    }

    // Inserting a node
//    void insert(int nodes[], int N) {
//        for(int i = 0; i<N;i++){
//            int key = nodes[i];
//            NodePtr node = new Node;
//            node->parent = nullptr;
//            node->data = key;
//            node->left = TNULL;
//            node->right = TNULL;
//            node->color = 1;
//
//            NodePtr y = nullptr;
//            NodePtr x = this->root;
//
//            while (x != TNULL) {
//                y = x;
//                if (node->data < x->data) {
//                    x = x->left;
//                } else {
//                    x = x->right;
//                }
//            }
//
//            node->parent = y;
//            if (y == nullptr) {
//                root = node;
//            } else if (node->data < y->data) {
//                y->left = node;
//            } else {
//                y->right = node;
//            }
//
//            if (node->parent == nullptr) {
//                node->color = 0;
//                continue;
//            }
//
//            if (node->parent->parent == nullptr) {
//                continue;
//            }
//
////            insertFix(node);
//        }
//    }

//    NodePtr getRoot() {
//        return this->root;
//    }


    void printTree() {
        if (root) {
            printHelper(this->root);
        }
    }
};
