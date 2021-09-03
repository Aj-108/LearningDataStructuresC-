#include<bits/stdc++.h>
using namespace std ;

vector<int> hasPath(int **edges,int n,int start,int end,bool *visited){
    if(start == end ){
        cout << "here" ;
        vector<int> path ;
        path.push_back(end) ;
        return path ;
    }

    visited[start] = true ;
    vector<int> p ;
    for(int i=0;i<n;i++){
        if (start == i) {
            continue ;
        }
        if(edges[start][i] == 1 && !visited) {
            p =hasPath(edges,n,i,end,visited) ;
            if(!p.empty()){
                p.push_back(i) ;
                return p ;
            }
        }
    }
    return p ;
}

int main(){
    int n,e ;
    cin >> n >> e ;

    int **edges = new int *[n] ;
    for(int i=0;i<n;i++){
        edges[i] = new int [n] ;
        for(int j=0;j<n;j++){
            edges[i][j] =  0 ;
        }
    }

    int f , s ;
    for(int i=0;i<e;i++){
        cin >> f >> s ;
        edges[f][s] = 1 ;
        edges[s][f] = 1 ;
    }

    int start , end ; 
    cin >> start >> end ;
    
    bool *visited = new bool [n] ;
    for(int i=0;i<n;i++){
        visited[i] = false ;
    }

    vector<int> path ;
    path = hasPath(edges,n,start,end,visited) ;
    if(path.empty()){
        cout << "Not Found" ;
    }
    else{
        for(int i=0;i<n;i++){
            cout << path[i] ;
        }
    }
    return 0 ;
}