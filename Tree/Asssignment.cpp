#include<bits/stdc++.h>
#include"TreeNode.h"
using namespace std ;

TreeNode<int>* takeInput(){
    cout << "Enter root data : " ;
    int rootData ;
    cin >> rootData ;
    TreeNode<int> *root = new TreeNode<int>(rootData) ;
    queue <TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;
    while(pendingNodes.size()!=0 ){
        TreeNode<int>* front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout << "Enter number of children for " << front->data << " : " ;
        int numChild ;
        cin >> numChild ;
        for(int i=0;i<numChild;i++){
            cout << "Enter data for " << i <<"th child of " <<front->data <<" : " ;
            int childData ;
            cin >> childData ;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child) ;
            pendingNodes.push(child) ;
        }
    }
    return root ;
}

bool isPresent(TreeNode<int> *root,int x ){
    if (root == NULL ) return false ;
    if(root->data == x) return true ;
    for(int i=0;(unsigned)i<root->children.size();i++){
        isPresent(root->children[i],x) ;
    }
    return false ;
}

int NodeCount(TreeNode<int> *root,int x){
    if(root == NULL ) return NULL ;
    int ans =0 ;
    for(int i=0 ;(unsigned)i<root->children.size();i++){
        NodeCount(root->children[i],x) ;
    }
    if(root->data > x) ans++;
    return ans ;
}

int MaxChildSum(TreeNode<int> *root,int maxSum){
    int maxNode=root->data,sum=root->data ;
    for(int i =0;(unsigned)i<root->children.size();i++){
        for(int i=0;i<root->children.size();i++){       // Getting Sum of Current Node
            sum += root->children[i]->data ;
        }
        maxNode = MaxChildSum(root->children[i],maxSum) ;
    }
    if(sum > maxSum){
            maxSum = sum ;
            maxNode = root->data ;
    }
    return maxNode ;
}

bool IdenticalStructure(TreeNode<int>* root,TreeNode<int>* root2){
    for(int i=0;(unsigned)i<root->children.size();i++){
        if(root->children.size() != root2->children.size()){
            return false ;
        }
        if(NULL); 
    }
    
}

int main(){


}