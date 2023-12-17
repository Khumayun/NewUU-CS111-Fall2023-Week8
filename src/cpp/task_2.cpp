/*
 * Author:
 * Date:
 * Name:
 */
#include "task_1.cpp"

void RedBlackTree::leftRotate(NodePtr x) {
    NodePtr y = x->right;
        x->right = y->left;
        if (y->left != TNULL) {
            y->left->parent = x;
        }
        y->parent = x->parent;
        if (x->parent == TNULL) {
            root = y;
        } else if (x == x->parent->left) {
            x->parent->left = y;
        } else {
            x->parent->right = y;
        }
        y->left = x;
        x->parent = y;
}

void RedBlackTree::rightRotate(NodePtr y) {
    NodePtr x = y->left;
        y->left = x->right;

        if (x->right != TNULL) {
            x->right->parent = y;
        }

        x->parent = y->parent;

        if (y->parent == TNULL) {
            root = x;
        } else if (y == y->parent->left) {
            y->parent->left = x;
        } else {
            y->parent->right = x;
        }

        x->right = y;
        y->parent = x;
}
