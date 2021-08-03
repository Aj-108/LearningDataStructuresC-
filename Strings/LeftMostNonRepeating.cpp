#include<bits/stdc++.h>
using namespace std ;

int lmost(string &str){
    vector<int> count(256,0) ;
    for(int i=0;i<str.size();i++){
        count[str[i]] ++ ;
    }
    for(int i=0;i<str.size();i++){
        if(count[str[i]] == 1 ) return i ;
    }
    return -1 ;
}

int main(){
    string str1 ;
    getline(cin,str1) ;

    cout <<lmost(str1);

    return 0 ;
}