#include<bits/stdc++.h>
#include"BinaryTreeNode.h"
using namespace std ;

vector<int>* getRootToNodePath(Node<int> *root,int x){
    if(root == NULL) {
        return NULL ; 
    } 

    if(root->data == x) { 
        vector<int> *output = new vector<int>() ;
        output->push_back(root->data) ;
        return output ;
    }

    vector<int>* leftOutput = getRootToNodePath(root->left,x);
    if(leftOutput != NULL ){
        leftOutput->push_back(root->data) ;
        return leftOutput ;
    }
    
    vector<int>* rightOutput = getRootToNodePath(root->right,x) ;
    if(rightOutput != NULL ){
        rightOutput->push_back(root->data) ;
        return rightOutput ;
    }
    return NULL ; 
}

int main(){

    return 0 ;
}
