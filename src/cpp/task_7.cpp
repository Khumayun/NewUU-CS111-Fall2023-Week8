/*
 * Author:
 * Date:
 * Name:
 */

#include "task_6.cpp"

NodePtr RedBlackTree::searchTree(int k) {
    return searchTreeHelper(this->root, k);
}
NodePtr RedBlackTree::searchTreeHelper(NodePtr node, int key) {
    if (node == TNULL || key == node->data) {
        return node;
    }

    if (key < node->data) {
        return searchTreeHelper(node->left, key);
    }
    return searchTreeHelper(node->right, key);
}
