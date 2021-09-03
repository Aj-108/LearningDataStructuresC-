#include<bits/stdc++.h>
using namespace std ;

bool isCycle(int **edges,int n,int s,bool *visited,int parent){
    visited[s] = true ;
    for(int i=0;i<n;i++){
        if(i == s ) continue ;
        if(visited[i] == false){
            if(isCycle(edges,n,i,visited,i)== true ) ;
                return true ;
        }
        else if(parent != i){
            return true ;
        }
    }
    return false ;
}

int main(){

    return 0 ;
}