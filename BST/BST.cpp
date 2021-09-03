#include<bits/stdc++.h>
#include"BinaryTreeNode.h"
#include<algorithm>

class BST{
    Node<int> *root ;

    private :
    bool hasData(int data,Node<int> *node){
        if (node == NULL ) return false;
        if(node->data == data) return true ;
        if(data<node->data){
           return  hasData(data,node->left) ;
        }
        return hasData(data,node->right) ;
    }

    Node<int>* insertData(int data,Node<int> *node){
        if(root == NULL ){
            Node<int> *newData = new Node<int>(data) ;
            return newData ;
        }
        if (data < node->data){
            node->left = insertData(data,node->left) ;
        }
        else{
            node->right = insertData(data,node->right) ;
        }
        return node ;
    }

    Node<int>* minimum(Node<int> *node){
        Node<int> *current = node ;
        while(current && current->left!=NULL){
            current = current->left ;
        }
        return current ;
        
    }
    

    Node<int> *deleteNode(int data,Node<int> *node){
        if(node == NULL ) return NULL ;
        if(node->data > data){
            root->left = deleteNode(data,node->left) ;
        }
        if(node->data < data){
            root->right= deleteNode(data,node->right) ;
        }
        if(node->data == data){
            if (node->left == NULL && node->right == NULL ) {
                delete node ;
                return NULL ;
            }
            else if(root->left == NULL && root->right != NULL){
                Node<int> *temp = node->right ;
                delete node ;
                return temp;
            }
            else if(root->left != NULL && root->right == NULL ){
                Node <int> *temp = node->left ;
                delete node ;
                return temp ;
            }
            else{
                Node<int> *temp = minimum(node->right) ;
                node->data = temp->data ;
                node->right = deleteNode(temp->data,node->right);
            }
        }
        return node ;
    }

    public :
    BST(){
        root = NULL ;
    }
    ~BST(){
        delete root ;
    }

    void delelteData(int data){

    }

    void insertData(int data ){
        insertData(data,root) ;
    }

    bool hasData(int data ){
        hasData(data,root) ;    
    }
};