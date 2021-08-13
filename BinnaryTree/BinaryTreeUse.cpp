#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std ;

void printBinary(BinaryTreeNode<int> *root){
    if(root == NULL ) return ;
    cout << root->data <<" : ";
    if(root->left != NULL ) cout <<"L"<< root->left->data <<",";
    if(root->right != NULL ) cout << "R" << root->right->data ;
    cout << "\n" ;
    
    printBinary(root->left) ;
    printBinary(root->right) ;
}

BinaryTreeNode<int>* takeInput(){
    int rootData ;
    cout << "Enter value ";
    cin >> rootData ;
    if (rootData == -1 ) return NULL ; 

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData) ;
    BinaryTreeNode<int> *leftchild = takeInput() ;
    BinaryTreeNode<int> *rightchild = takeInput() ;
    root->left = leftchild ;
    root->right = rightchild ;
    return root ;
}

BinaryTreeNode<int>* takeInputLevelWise(){
    cout << "Enter root value : " ;
    int rootData ;
    cin >> rootData ;
    if(rootData == -1 ) return NULL ;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData) ;
    queue<BinaryTreeNode<int>*> pendingNodes ;
    pendingNodes.push(root);
    while(pendingNodes.empty() != true){
        BinaryTreeNode<int> *front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout << "Enter data for left child of " <<front->data <<" : " ;
        int leftchildData ;
        cin >> leftchildData ;
        cout << "Enter data for right child of " <<front->data <<" : " ;
        int rightchildData ;
        cin >> rightchildData ;
        if(leftchildData != -1 ){
            BinaryTreeNode<int> *leftchild = new BinaryTreeNode<int>(leftchildData) ;
            front->left = leftchild ;
            pendingNodes.push(front->left) ;
        }
        if(rightchildData != -1){
            BinaryTreeNode<int>* rightchild = new BinaryTreeNode<int>(rightchildData);
            front->right = rightchild ; 
            pendingNodes.push(front->right) ;
        }
    }
    return root ;
}

void printLevelWise(BinaryTreeNode<int>* root){
    if(root == NULL ) return ;

    queue<BinaryTreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;
    while(pendingNodes.size()!=0 ){
        cout << pendingNodes.front()->data ;
        if(pendingNodes.front()->left != NULL ){
            pendingNodes.push(pendingNodes.front()->left) ;
        }
        if (pendingNodes.front()->right != NULL ){
            pendingNodes.push(pendingNodes.front()->right) ;
        }
        pendingNodes.pop() ;
    }
}

int main(){
    BinaryTreeNode<int>* root = takeInputLevelWise() ;
    printLevelWise(root) ;

    return 0 ;
}