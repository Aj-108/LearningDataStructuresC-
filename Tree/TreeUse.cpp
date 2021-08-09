#include<bits/stdc++.h>
#include"TreeNode.h"
using namespace std ;

TreeNode<int>* takeInput(){
    int data ;
    cout << "Enter data " <<endl ;
    cin >> data ;
    TreeNode<int>* root = new TreeNode<int>(data) ; 

    int n ;
    cout <<"Enter number of chidlren for " << data <<"\n";
    cin >> n ;
    for(int i=0;i<n;i++){
        TreeNode<int> *child = takeInput() ;
        root->children.push_back(child) ;
    }
    return root ;
}

void printTree(TreeNode<int>* root){
    if(root == NULL ) return ;   //Edge case not a base case  
    cout << root->data << ":" ;
    for(int i=0;(unsigned)i<root->children.size();i++){
        cout << root->children[i]->data <<"," ;
    }
    cout << "\n" ;
    for(int i=0;(unsigned)i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

int main(){
    TreeNode<int> *root = takeInput() ;
    printTree(root) ;


    return 0 ;
}