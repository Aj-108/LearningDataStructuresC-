#include<iostream>
#include<queue>
#include"TreeNode.h"
using namespace std ;

TreeNode<int>* takeInput(){
    int rootData ;
    cout << "Enter root data " ;
    cin >> rootData ;

    TreeNode<int>* root = new TreeNode<int>(rootData) ;

    queue<TreeNode<int>*> pendingNodes ;

    pendingNodes.push(root) ;
    while(pendingNodes.size()!=0){
        int n ;
        TreeNode<int> *front = pendingNodes.front() ; 
        pendingNodes.pop() ;
        cout <<"Enter Number of Chiildren for " << front->data <<" ";
        cin >> n ;
        for(int i=0 ;i<n;i++){
            cout << "Enter " << i << "th child of " << front->data <<" ";
            int childData;
            cin >> childData ;
            TreeNode<int> *child = new TreeNode<int>(childData) ;
            front->children.push_back(child) ;
            pendingNodes.push(child) ;
        }
    }
    return root ;
}

void printTree(TreeNode<int> *root){
    queue<TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;
    while(pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front() ;
        pendingNodes.pop();
        cout << front->data << ":" ;
        for(int i=0;(unsigned)i<front->children.size();i++){
            cout << front->children[i]->data <<",";
            pendingNodes.push(front->children[i]) ;
        }
        cout <<endl;
    }
}

int numNode(TreeNode<int>* root){
    int ans = 1;
    for(int i=0;(unsigned)i<root->children.size();i++){
        ans += numNode(root->children[i]);
    }
    return ans ;
}

int NodeSum(TreeNode<int>* root){
    int sum = root->data ;
    for(int i=0 ;(unsigned)i<root->children.size();i++){
        sum += NodeSum(root->children[i]) ;
    }
    return sum ;
}

int main(){
    TreeNode<int> *root = takeInput() ;
    int sum = numNode(root);
    cout << sum ;
    return 0 ;
}