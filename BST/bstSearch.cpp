#include<bits/stdc++.h>
#include"BinaryTreeNode.h"
using namespace std ;
template <typename T >

class LinkedListNode{
    public :
    T data ;
    LinkedListNode *next ;

    LinkedListNode(T data){
        this->data = data ;
        next = NULL ;
    }
};

Node<int>* BinarySearch(Node<int> *root,int n){
    if (root == NULL ) return NULL ;
    if(root->data == n) return root ;
    if ( n< root->data) return BinarySearch(root->left,n);
    return BinarySearch(root->right,n) ;
}

void BinaryRange(Node<int>* root,int n1,int n2){
    if(root == NULL) return ;
    if(root->data>=n1 || root->data<=n2 ) {
        cout << root->data <<" ";
    }
    if(root->data >= n1) BinaryRange(root->left,n1,n2) ;
    if(root->data <= n2) BinaryRange(root->right,n1,n2) ;
}

Node<int>* takeInput(){
    cout << "Enter root value : " ;
    int rootData ;
    cin >> rootData ;
    if(rootData == -1 ) return NULL ;
    Node<int> *root = new Node<int>(rootData) ;
    queue<Node<int>*> pendingNodes ;
    pendingNodes.push(root);
    while(pendingNodes.empty() != true){
        Node<int> *front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout << "Enter data for left child of " <<front->data <<" : " ;
        int leftchildData ;
        cin >> leftchildData ;
        cout << "Enter data for right child of " <<front->data <<" : " ;
        int rightchildData ;
        cin >> rightchildData ;
        if(leftchildData != -1 ){
            Node<int> *leftchild = new Node<int>(leftchildData) ;
            front->left = leftchild ;
            pendingNodes.push(front->left) ;
        }
        if(rightchildData != -1){
            Node<int>* rightchild = new Node<int>(rightchildData);
            front->right = rightchild ; 
            pendingNodes.push(front->right) ;
        }
    }
    return root ;
}

void print(Node<int> *root){
    if(root == NULL ) return ;
    cout << root->data <<" " ;
    print(root->left);
    print(root->right);
}

int maximum(Node<int> *root){
    if (root == NULL )  return INT_MIN ;
    int max1 = maximum(root->left) ;
    int max2 = maximum(root->right) ;
    return max(root->data,max(max1,max2)) ;
}

int minimum(Node<int> *root){
    if(root == NULL ) return INT_MAX ;
    int min1 = minimum(root->left) ;
    int min2 = minimum(root->right) ;
    return min(root->data,min(min1,min2)) ; 
}

bool isBST(Node<int> *root){
    if(root == NULL ) return true ;
    int leftMax = maximum(root->left) ;
    int rightMin = minimum (root->right) ;
    if (root->left!=NULL && leftMax < root->data) return false ;
    if(root->right!=NULL && rightMin >= root->data) return false ;
    return isBST(root->left) && isBST(root->right) ;
}

bool isBST3(Node<int>* root,int min = INT_MIN,int max=INT_MAX){  // Checking Contrains and passing constrains top-bottom
    if(root == NULL ) return true ;
    if(root->data < min || root->data > max) return false ;
    bool leftOutput = isBST3(root->left ,min,root->data-1) ;
    bool rightOutput = isBST3(root->right,root->data,max) ;
    return (leftOutput && rightOutput) ;
}

Node<int>* sortedArrayToBST(int arr[],int strt,int end){
    if(strt>end ) return NULL ;
    int mid = (strt+(end))/2 ;
    Node<int> *root = new Node<int>(arr[mid]) ;
    root->left = sortedArrayToBST(arr,strt,mid-1) ;
    root->right = sortedArrayToBST(arr,mid+1,end) ;
    return root ;    
}

LinkedListNode<int>* treeToLL(Node<int>* root){
    if(root == NULL ) return NULL ;
    LinkedListNode<int>* lhead = treeToLL(root->left) ;
    LinkedListNode<int> *newData = new LinkedListNode<int>(root->data) ;
    if(lhead != NULL ){
        LinkedListNode<int>* temp = lhead ;
        while(temp->next) temp = temp->next ;
        temp->next = newData ;
    }
    else{
        lhead = newData ;
    }
    if(root->right != NULL ) newData->next = treeToLL(root->right) ;
    return lhead ;
}

void printLL (LinkedListNode<int> *head){
    LinkedListNode<int> *temp = head ;
    while(temp){
        cout << temp->data <<" " ;
        temp = temp->next ;
    }
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7} ;
    Node<int> *root = sortedArrayToBST(arr,0,7);
    LinkedListNode<int> *head = treeToLL(root) ;
    printLL(head) ;
    return 0 ;
}