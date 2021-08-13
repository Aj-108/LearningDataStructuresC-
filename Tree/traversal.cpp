#include<bits/stdc++.h>
#include"TreeNode.h"
using namespace std ;

TreeNode<int>* takeInput(){
    int rootData ;
    cout << "Enter Root Data : " ;
    cin >> rootData ;
    TreeNode<int> *root  = new TreeNode<int>(rootData) ;
    queue<TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;
    while(pendingNodes.size()!=0){
        TreeNode<int> *front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout << "Enter number of children for " << front->data <<" : " ;
        int childNum ;
        cin >> childNum ;
        for(int i=0;i<childNum;i++){
            int childData ;
            cout << "Enter data for " <<i <<"th child of " << front->data <<" : " ;
            cin >> childData ;
            TreeNode<int>* child = new TreeNode<int>(childData) ;
            front->children.push_back(child) ;
            pendingNodes.push(child) ;
        }
    }
    return root ;
}

void postOrder(TreeNode<int>* root){
    for(int i=0;(unsigned)i<root->children.size();i++){
        postOrder(root->children[i]) ;
    }
    cout << root->data <<" ";
}

void preOrder(TreeNode<int>* root){
    cout << root->data <<" " ;
    for(int i=0;(unsigned)i<root->children.size();i++){
        preOrder(root->children[i]) ;
    }
}

int main(){
    TreeNode<int> *root = takeInput() ;
    postOrder(root) ;
    return 0 ;
}