/*
 * Author:
 * Date:
 * Name:
 */

#include "task_5.cpp"

int RedBlackTree::blackHeightHelper(NodePtr node) {
    if (node != TNULL) {
        int leftBlackHeight = blackHeightHelper(node->left);
        int rightBlackHeight = blackHeightHelper(node->right);

        int currentBlackHeight = (node->color == 0) ? rightBlackHeight + 1 : rightBlackHeight;

        cout << node->data << " - " << currentBlackHeight << endl;

        return currentBlackHeight+rightBlackHeight;
    } else {
        // For null nodes (leaves), return black height as 1 (assuming null nodes are black)
        return 1;
    }
}

void RedBlackTree::printBlackHeight() {
    if (root != TNULL) {
        blackHeightHelper(root);
    }
}
