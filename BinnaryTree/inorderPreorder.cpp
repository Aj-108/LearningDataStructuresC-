#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std ;
int preIndex =0 ;

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

BinaryTreeNode<int>* makeTree(int preOrder[],int inOrder[],int is,int ie){
    if(is>ie) return NULL ;
    BinaryTreeNode<int> *root =new BinaryTreeNode<int>(preOrder[preIndex++]);

    int Index ;
    for(int i=0;i<=ie;i++){
        if(inOrder[i] == root->data) {
            Index = i ;
            break ;
        }
    }

    root->left = makeTree(preOrder,inOrder,is,Index-1);
    root->right = makeTree(preOrder,inOrder,Index+1,ie) ;
    return root ; 
}

BinaryTreeNode<int>* spiralPrint(BinaryTreeNode<int> *root){
    if(root == NULL ) return NULL ;
    queue <BinaryTreeNode<int>*> q;
    stack <BinaryTreeNode<int>*> s ;
    bool reverse = false ;
    q.push(root);
    while(!q.empty()){
        int count = q.size() ;
        for(int i=0;i<count;i++){
            if(reverse){
                s.push(q.front()) ;
            }
            else{
                cout << q.front()->data ;
            }
            if(q.front()->left != NULL ) q.push(q.front()->left) ;
            if(q.front()->right != NULL ) q.push(q.front()->right) ;
            q.pop() ;
        }
        if(reverse){
            while(!s.empty()){
                cout << s.top()->data ;
                s.pop() ;
            }
        }
        reverse = !reverse ;
        cout << endl ;
    }
}

BinaryTreeNode<int>* spiralPint2(BinaryTreeNode<int> *root){
    if(root == NULL ) return NULL ;
    stack<BinaryTreeNode<int>*> s1 ;
    stack<BinaryTreeNode<int>*> s2 ;
    s1.push(root) ;
    while(!s1.empty() || !s2.empty()){
        if(!s1.empty()){
            for(int i=0;i<s1.size();i++){
                cout << s1.top()->data ;
                if(s1.top()->left != NULL ) s2.push(s1.top()->left) ;
                if(s1.top()->right != NULL ) s2.push(s1.top()->right) ;
                s1.pop() ;
            }
        }
        else{
            for(int i=0;i<s2.size();i++){
                cout << s2.top()->data ;
                if(s2.top()->right != NULL ) s1.push(s2.top()->right) ;
                if(s2.top()->left != NULL ) s1.push(s2.top()->left) ;
                s2.pop() ;
            }
        }
    }
}

int main(){


    return 0 ;
}