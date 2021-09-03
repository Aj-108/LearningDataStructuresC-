#include<bits/stdc++.h>
using namespace std ;

void frequency(vector<int> v1){
    unordered_map <int,int> m ;
    for(int i=0;i<v1.size();i++){
        m[v1[i]] ++ ;
    }

    for(auto it : m){
        cout << it.first << " " <<it.second <<"\n" ; 
    }
    // for(auto it = m.begin();it!=m.end();it++){
    //     cout << it->second ;
    // }
}

int main(){
    int n ;
    vector<int> v1 ;
    for(int i=0;i<n;i++){
        int element ;
        cin>> element ;
        v1.push_back(element)  ;
    }
    frequency(v1) ;
    return 0 ;
}