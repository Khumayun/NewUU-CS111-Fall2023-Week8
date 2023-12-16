/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_9.cpp"
#include "task_10.cpp"

int main() {

    ////////////////////////////////////////////////
    // TASK 1
    RedBlackTree bst;
    int arr[] = {11, 18, 10, 15, 23, 9, 17, 8, 16, 20};
    bst.insert(arr, 10);

//    bst.printTree();
    ////////////////////////////////////////////////
//    cout << endl;
//    bst.numberOfChild();
    cout << endl;
    bst.printBlackHeight();


    struct node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);

    cout << "Inorder traversal: ";
    inorder(root);

    cout << "\nAfter deleting 10\n";
    root = deleteNode(root, 10);
    cout << "Inorder traversal: ";
    inorder(root);
    return 0;
}
