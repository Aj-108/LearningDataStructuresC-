#include<vector>
using namespace std ;
template <typename T>

class TreeNode{
    public :
    T data ;
    vector <TreeNode*> children ;  // same as <TreeNode<T>*>

    TreeNode(T data){
        this->data = data ;
    } 
};