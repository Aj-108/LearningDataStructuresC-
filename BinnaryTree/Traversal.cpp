#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std ;

void inOrder(BinaryTreeNode<int> *root){
    if(root == NULL ) return ;

    inOrder(root->left);
    cout << root->data <<" " ;
    inOrder(root->right) ;
}

void preOrder(BinaryTreeNode<int> *root){
    if(root == NULL ) return ;
    cout << root->data ;
    preOrder(root->left) ;
    preOrder(root->right) ;
}

void postOrder(BinaryTreeNode<int> *root){
    if(root == NULL ) return ;
    postOrder(root->left) ;
    postOrder(root->right) ;
    cout << root->data ;
}