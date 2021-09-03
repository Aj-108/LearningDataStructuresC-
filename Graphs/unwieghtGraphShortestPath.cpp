#include<bits/stdc++.h>
using namespace std ;

void path(int **edges,int n,int *dst,int src){
    bool *visited = new bool[n] ;
    for(int i=0;i<n;i++){
        visited[i] = false ;
    }
    dst[src] = 0 ;
    visited[src]= true ;
    queue<int> pendingVertices ;
    pendingVertices.push(src) ;
    while(pendingVertices.empty() != true){
        int elmnt =pendingVertices.front();
        pendingVertices.pop() ;
        for(int i=0;i<n;i++){
            if(i == elmnt) continue ;
            if(edges[elmnt][i] == 1 && !visited[i]){
                visited[i] = true ;
                dst[i] = dst[elmnt] + 1 ;
                pendingVertices.push(elmnt) ;
            }
        }
    }
}


int main(){
    int n,e ;
    cin >> n >> e ;

    int **edges = new int* [n] ;
    for(int i=0;i<n;i++){
        edges[i] = new int [n] ;
        for(int j=0;j<n;j++){
            edges[i][j] =  0 ;
        }
    } 

    int frst,scnd ;
    for(int i=0;i<e;i++){
        cin >> frst >> scnd ; 
        edges[frst][scnd] = 1 ;
        edges[scnd][frst] = 1 ;
    }

    int *dst = new int [n] ;
    int src ;
    cin >> src ;
   
    path(edges,n,dst,src) ;

    for(int i=0;i<n;i++){
        cout << dst[i] <<" ";
    }
    return 0 ;
}