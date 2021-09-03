#include<bits/stdc++.h>
using namespace std ;

void printDFS(int **edges,int n,int sv,bool *visited){
    cout << sv ;
    visited[sv] = true ;
    for(int i=0;i<n;i++){
        if(i == sv) {
            continue ;
        }
        if(edges[sv][i] == 1 && !visited){
            printDFS(edges,n,i,visited) ;            
        }
    }
}

void DFS(int **edges,int n){
    bool *visited = new bool[n] ;
    for(int i=0;i<n;i++){
        visited[i] = false ;
    }
    for(int i=0;i<n;i++){
        if(!visited[i])
            printDFS(edges,n,i,visited) ;
    }
}

void printBFS(int **edges,int n,int sv,bool *visited){
    queue<int> pendingvertices ;
    pendingvertices.push(sv) ;
    while(pendingvertices.empty()){
        int front = pendingvertices.front() ;
        cout << front ;
        for(int i=0;i<n;i++){
            if(i == front) {
                continue ;
            }
            if(edges[front][i] == 1 && !visited){
                visited[i] = true ;
                pendingvertices.push(i) ;
            }
        }
        pendingvertices.pop() ;
    }
}

void BFS(int **edges,int n){
    bool *visited = new bool [n] ;
    for(int i=0;i<n;i++){
        visited[i] = false ;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printBFS(edges,n,i,visited) ;
        }
    }
}

int main(){
    int n,e ;
    cin >> n >> e ;

    int **edges = new int*[n] ;
    for(int i=0;i<n;i++){
        edges[i] = new int [n] ;
        for(int j=0;j<n;j++){
            edges[i][j] = 0 ;
        }
    }

    int f , s;
    for(int i=0;i<n;i++){
        cin >> f >> s ;
        edges[f][s] = 1 ;
        edges[s][f] = 1 ;
    }

    DFS(edges,n) ;

    return 0 ;
}