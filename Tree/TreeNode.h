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

    ~TreeNode(){
        for(int i=0;i<childrem->size();i++){
            delete children[i] ;    
        }
    }
};