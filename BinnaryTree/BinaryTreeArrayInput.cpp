#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std;

BinaryTreeNode<int>* insretNode(BinaryTreeNode<int>* root,int value ,queue<BinaryTreeNode<int>*> &pendingNodes){
    BinaryTreeNode<int> *node = new BinaryTreeNode<int>(value) ;
    if (root == NULL ){
        root = node ;
    }
    else if(pendingNodes.front()->left == NULL ){
        pendingNodes.front()->left = node ;
    }
    else{
        pendingNodes.front()->right = node ;
        pendingNodes.pop() ;
    }
    pendingNodes.push(node) ;
    return root ;

}

BinaryTreeNode<int>* createTree(int arr[],int n ){
    BinaryTreeNode<int> *root = NULL ;
    queue<BinaryTreeNode<int>*> pendingNodes ;
    for(int i=0;i<n;i++){
        root = insretNode(root,arr[i],pendingNodes) ;
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
    int arr[5] = {1,2,3,4,5} ;
    BinaryTreeNode<int>* root = createTree(arr,5);
    printLevelWise(root) ;
    return 0 ;
}