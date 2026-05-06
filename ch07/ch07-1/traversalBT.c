#include <stdio.h>
#include <stdlib.h>
#include "traversalBT.h"

treeNode *makeRootNode(char data, treeNode *left, treeNode *right) {
    treeNode *node = (treeNode *)malloc(sizeof(treeNode));
    node->data = data;
    node->left = left;
    node->right = right;
    return node;
}

void preorder(treeNode *root) {
    if (root != NULL) {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(treeNode *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}

void postorder(treeNode *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%c ", root->data);
    }
}
