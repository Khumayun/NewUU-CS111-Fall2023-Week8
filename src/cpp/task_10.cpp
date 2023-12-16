/*
 * Author:
 * Date:
 * Name:
 */
// Binary Search Tree operations in C++

struct node {
    int key;
    struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
    // write your code here
}

// Insert a node
struct node *insert(struct node *node, int key) {
    // write your code here
}

// Find the inorder successor
struct node *minValueNode(struct node *node) {
    // write your code here
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
    // write your code here
}

// Print height of a tree
void height(struct node *root) {
    // write your code here
}
