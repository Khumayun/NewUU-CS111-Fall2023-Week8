/*
 * Author:
 * Date:
 * Name:
 */

#include "task_4.cpp"

int RedBlackTree::numberOfChildHelper(NodePtr node){
    if (node != TNULL) {
        if (node->left == nullptr && node->right == nullptr) {
            return 0;
        }

        int leftChildCount = numberOfChildHelper(node->left);
        int rightChildCount = numberOfChildHelper(node->right);

        int totalChildCount = leftChildCount + rightChildCount;

        cout << node->data << " - " << totalChildCount << endl;

        return 1 + totalChildCount;  // Including the current node as one child
    } else return 0;
}

void RedBlackTree::numberOfChild(){
    if(root){
        numberOfChildHelper(this->root);
    }
}
