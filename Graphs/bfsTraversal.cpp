#include<bits/stdc++.h>
using namespace std ;

void bfs(int **edges,int n,int sv,bool *visited){
    queue<int> q ;
    q.push(sv) ;
    visited[sv] = true ;
    while(q.empty() != true ){
        cout << q.front() ;
        for(int i=0;i<n;i++){
            if(edges[q.front()][i] == q.front()){
                continue ;
            }
            else{
                if(edges[q.front()][i] != 0 ){
                    if(visited[i]){
                        continue ;
                    }
                    else{
                        visited[i] = true ;
                        q.push(i) ;
                    }
                }
            }
        }
        q.pop() ;
    }
}

int main(){
    int  n,e ;
    cin >> n >> e ;

    int **edges = new int*[n] ;
    for(int i=0;i<n;i++){
        edges[i] = new int [n] ;
        for(int j=0;j<n;j++){
            edges[i][j] = 0 ;
        }
    }

    for(int i=0;i<e;i++){
        int f ,s ;
        cin >> f >> s ;
        edges[f][s] = 1 ;
        edges[s][f] = 1 ;
    }

    bool *visited = new bool[n] ;
    for(int i=0;i<n;i++){
        visited[i] = false ;
    }

    bfs(edges,n,0,visited) ;

    delete [] visited ;
    for(int i=0;i<n;i++){
        delete [] edges[i] ;
    }
    delete [] edges ;
    return 0 ;
}