/*
 * Author:
 * Date:
 * Name:
 */

#include "task_3.cpp"

void RedBlackTree::reversePrintTree(){
    if (root) {
        if (root != TNULL) {
            cout << "(";
            string sColor = root->color ? "RED" : "BLACK";
            cout << root->data << "(" << sColor << ")";
            printHelper(root->right);
            printHelper(root->left);
            cout << ")";
        }
    }
}