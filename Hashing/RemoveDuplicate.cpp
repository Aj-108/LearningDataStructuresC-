#include<bits/stdc++.h>
using namespace std ;

vector<int> RemoveDuplicate(int *arr,int size){
    vector<int> output ;
    unordered_map<int,bool> seen ;
    for(int i=0;i<size;i++){
        if(seen.count(arr[i])>0){
            continue ;
        }
        seen[arr[i]] = true ;
        output.push_back(arr[i]) ;
    }
    return output ;
}

int main(){
    int arr[] = {1,2,3,4,1,2,5,4,6,5,1,3,4,4,2,6,4} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    vector<int> output = RemoveDuplicate(arr,n) ;
    for(int i=0;i<output.size();i++){
        cout << output[i] <<endl;
    }
    return 0 ;
}