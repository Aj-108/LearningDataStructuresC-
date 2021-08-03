#include<bits/stdc++.h>
using namespace std ;

int lMost(string &str){
    vector<bool> v1(256,false);
    int res = -1 ;
    for(int i=str.size()-1;i>=0;i--){
        if(v1[str[i]] == false ) v1[str[i]] = true ;
        else res = i ;
    }
    return res ;
}

int leftMost(string &str){
    vector<int> v1 (256,-1) ;
    int res = INT_MAX ;
    for(int i=0;i<str.size();i++){
        int fi=v1[str[i]] ;
        if(fi == -1) v1[str[i]]= i;
        else res = min(res,fi) ;
    }
    
    return (res == INT_MAX)? -1 : res ;
}

//2 traversals of O(n)
int leftRepeat(string &str){
    vector<int> v1(256,0) ;
    for(int i=0;i<str.size();i++){
        v1[str[i]] ++ ;
    }
    for(int i=0;i<str.size();i++){
        if(v1[str[i]] > 1) return i ;
    }
    return -1 ;
}

int main(){
    string str ;
    getline(cin,str) ;

    cout << lMost(str) ;
    return 0 ;
}