#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std ;
bool flag = false ;


// BinaryTreeNode<int>* takeInput(){
//     cout << "Enter root data " ;
//     int rootData ;
//     cin >> rootData ;
//     if(rootData == -1 ) return NULL ;
//     BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData) ;
//     queue<BinaryTreeNode<int>*> pendingNodes ;
//     pendingNodes.push(root);
//     while(pendingNodes.size()!=0){
//         BinaryTreeNode<int> *front = pendingNodes.front() ;
//         pendingNodes.pop() ;
//         cout << "Enter data for left child of " << pendingNodes.front()->data ;
//         int leftchildData ;
//         cin >> leftchildData ;
//         cout << "Enter data for right child of " << pendingNodes.front()->data ;
//         int rightchildData ;
//         cin >> rightchildData ;
        
//         if(leftchildData != -1){
//             BinaryTreeNode<int> *leftchild = new BinaryTreeNode<int>(leftchildData) ;
//             pendingNodes.push(leftchild) ;
//             front->left = leftchild ;
//         }
//         if(rightchildData!= -1 ){
//             BinaryTreeNode<int> *rightchild = new BinaryTreeNode<int>(rightchildData) ;
//             pendingNodes.push(rightchild) ;
//             front->right = rightchild ;
//         }
        
//     }
//     return root ;
// }

BinaryTreeNode<int>* takeInput(){
    cout << "Enter root value : " ;
    int rootData ;
    cin >> rootData ;
    if(rootData == -1 ) return NULL ;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData) ;
    queue<BinaryTreeNode<int>*> pendingNodes ;
    pendingNodes.push(root);
    while(pendingNodes.empty() != true){
        BinaryTreeNode<int> *front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout << "Enter data for left child of " <<front->data <<" : " ;
        int leftchildData ;
        cin >> leftchildData ;
        cout << "Enter data for right child of " <<front->data <<" : " ;
        int rightchildData ;
        cin >> rightchildData ;
        if(leftchildData != -1 ){
            BinaryTreeNode<int> *leftchild = new BinaryTreeNode<int>(leftchildData) ;
            front->left = leftchild ;
            pendingNodes.push(front->left) ;
        }
        if(rightchildData != -1){
            BinaryTreeNode<int>* rightchild = new BinaryTreeNode<int>(rightchildData);
            front->right = rightchild ; 
            pendingNodes.push(front->right) ;
        }
    }
    return root ;
}

int CountNodes(BinaryTreeNode<int>* root){
    if (root == NULL ) return 0 ;
    // int count = 0 ;
    // count += CountNodes(root->left) ;
    // count += CountNodes(root->right) ;
    // return count+1 ;

    return 1 + CountNodes(root->left) + CountNodes(root->right) ;
}

bool isNodePresent(BinaryTreeNode<int>* root,int x){
    if (root == NULL ) return false ;
    bool ans = false;
    if (root->data == x){
        return true ;
    }
    if(!ans && root->left!= NULL )   ans = isNodePresent(root->left,x);
    if(!ans && root->right != NULL ) ans =isNodePresent(root->right,x);
    return ans ;
}

int treeHeight(BinaryTreeNode<int>* root){
    if (root == NULL ) return 0 ;
    // int height = 0 ;
    // height = max(height,treeHeight(root->left)) ;
    // height = max(height,treeHeight(root->right)) ;
    return 1+max(treeHeight(root->left),treeHeight(root->right)) ;    
}

void mirrorBinary(BinaryTreeNode<int> *root){
    if(root == NULL ) return ;
    BinaryTreeNode<int>* temp = root->left ;
    root->left = root->right ;
    root->right = temp ;
    mirrorBinary(root->left) ;
    mirrorBinary(root->right) ;
}

int Diameter(BinaryTreeNode<int> *root){
    if (root == NULL ) return 0 ;
    int option1 = treeHeight(root->left) + treeHeight(root->right) ;
    int option2 = Diameter(root->left) ;
    int option3 = Diameter(root->right);
    return max(option1,max(option2,option3)) ;
}

int getMax(BinaryTreeNode<int>* root ){
    if(root == NULL ) return INT_MIN;

    return max(root->data,max(getMax(root->left),getMax(root->right)));
}

bool propertyCheck(BinaryTreeNode<int> *root){
    if(root == NULL ) return true ;
    if(root->left == NULL && root->right == NULL ) return true ;
    int sum = 0 ;
    if(root->left != NULL ) sum+=root->left->data ;
    if(root->right != NULL ) sum+=root->right->data ;
    return (sum == root->data && propertyCheck(root->right) && propertyCheck(root->left)) ;
}

int treeBalance(BinaryTreeNode<int> *root){
    if(root == NULL ) return 0 ;
    int lh = treeBalance(root->left) ;
    if(lh == -1 ) return -1 ;
    int rh = treeBalance(root->right) ;
    if(rh == -1 ) return -1 ;
    if(abs(lh-rh)> 1 ) return -1 ;
    return max(lh,rh)+1 ;
}

void Depth(BinaryTreeNode<int>* root,int k){
    if(root == NULL) return ;
    if(k == 1) {
        cout << root->data ;
        return ;
    }

    Depth(root->left,k-1) ;
    Depth(root->right,k-1) ;
}

int maxWidth(BinaryTreeNode<int> *root){
    if(root == NULL ) return 0 ;
    queue<BinaryTreeNode<int>*> pendingNodes ;
    pendingNodes.push(root);
    int res =0 ;
    while(!pendingNodes.size()){
        int count = pendingNodes.size() ;
        res = max(res,count) ;
        for(int i=0;i<count;i++){
            BinaryTreeNode<int> *curr = pendingNodes.front() ; 
            pendingNodes.pop() ;
            if(curr->left != NULL ) pendingNodes.push(curr->left) ;
            if(curr->right != NULL ) pendingNodes.push(curr->right) ;
        }
    }
    return res ;
}

//LCA
bool findPath(BinaryTreeNode<int> *root,vector<BinaryTreeNode<int>*> p,int n){
    if (root == NULL ) return NULL ;
    p.push_back(root) ;
    if(root->data == n ){
        return true ;
    }

    if(findPath(root->left,p,n) || findPath(root->right,p,n)){
        return true ;
    }
    p.pop_back() ;
    return false ;
}

BinaryTreeNode<int>* LCA(BinaryTreeNode<int> *root,int n1,int n2){
    vector<BinaryTreeNode<int>*> path1,path2 ;
    if(findPath(root,path1,n1)== false || findPath(root,path2,n2==false)){
        return NULL ;
    }
    for(int i=0;i<path1.size()-1 && i<path2.size()-1;i++){
        if(path1[i+1] == path2[i+2]) return path1[i] ;
    }
    return NULL ;
}

int main(){
    BinaryTreeNode<int>* root = takeInput() ;
    Depth(root,3) ;

    return 0 ;
}