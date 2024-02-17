#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Function to create a new node
struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

// Function to check if a binary tree is a BST using inorder traversal
int isBST(struct TreeNode* node) {
    static struct TreeNode* prev = NULL;
    if(node!=NULL){
         if(!isBST(node->left)){
        return 0;
    }
    if(prev!=NULL && node->val<= prev->val){
        return 0;
    }
    prev = node;
    return isBST(node->right);

    }
    else {
        return 1;
    }
}

struct TreeNode* inorder( struct TreeNode* root){
if(root!=NULL){
     inorder(root->left);
printf("%d",root->val);
 inorder(root->right);
}
}


int main() {
    // Create a sample binary tree
    struct TreeNode* root = newNode(5);
    root->left = newNode(3);
    root->right = newNode(6);
    root->left->left = newNode(1);
    root->left->right = newNode(4);

    // Check if the binary tree is a BST
printf("%d ", isBST(root));  
inorder(root);  


    return 0;
}
