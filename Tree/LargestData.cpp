#include<bits/stdc++.h>
#include"TreeNode.h"
using namespace std ;

TreeNode<int>* takeInput(){
    int rootData ;
    cout << "Enter root data " ;
    cin >> rootData ;

    TreeNode<int> *root = new TreeNode<int>(rootData) ;
    queue <TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;
    while(pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout << "Enter number of children for " << front->data << " " ;
        int n ;
        cin >> n ;
        for(int i=0;i<n;i++){
            int childData ;
            cout << "Enter " << i <<"th children for " << front->data <<" " ;
            cin >> childData ;
            TreeNode <int>* child = new TreeNode<int>(childData) ;
            front->children.push_back(child) ;
            pendingNodes.push(child) ;
        }
    }
    return root ;
}

int largestNode(TreeNode<int> *root){
    int largest = root->data ;
    for(int i=0 ;(unsigned)i<root->children.size();i++){
        largest = max(largest,largestNode(root->children[i])) ;
    }
    return largest ;
}

int maxHeight(TreeNode<int>* root){
    int height=0 ;
    for(int i=0;(unsigned)i<root->children.size();i++){
        height = max(height,maxHeight(root->children[i]));
    }
    return height+1 ;
}

void depthNode(TreeNode<int> *root,int k){//printAtLevelK
    if(root == NULL ) return ;
    if(k==0) {
        cout << root->data ;
        return ;
    }
    for(int i=0;(unsigned)i<root->children.size();i++){
        depthNode(root->children[i],k-1) ;
    }
}

int leafCount(TreeNode<int> *root){
    if(root == NULL ) return ;
    if(root->children.size() == 0) {
        return 1 ;
    }
    int count =0 ;
    for(int i=0;(unsigned)i<root->children.size();i++){
        count += leafCount(root->children[i]) ;
    }
    return count ;
}

int main(){
    TreeNode<int> *root = takeInput() ;
    cout << largestNode(root) ;
    return 0 ;
}