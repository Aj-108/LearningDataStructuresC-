#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std ;

void preOrder(BinaryTreeNode<int> *root){
   if(root == NULL ) return ;
   cout << root->data ; 
   if(root->left != NULL ) preOrder(root->left) ;
   if(root->right != NULL ) preOrder(root->right) ;
}

void inOrder(BinaryTreeNode<int> *root){
    if(root == NULL) return ;
    if(root->left!=NULL) inOrder(root->left) ;
    cout << root->data ;
    if(root->right != NULL ) inOrder(root->right) ;
}

int main(){


    return 0 ;
}