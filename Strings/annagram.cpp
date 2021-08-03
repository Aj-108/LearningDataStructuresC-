#include<bits/stdc++.h>
using namespace std ;

bool isAnnagram(string &str1,string &str2){
    vector<int> v1(256,0) ;
    for(int i=0;i<str1.size();i++){
        v1[str1[i]]++ ;
        v1[str2[i]]--;
    }
    for(int i=0;i<256;i++) if(v1[i]!=0) return false ;
    return true ;
}

int main(){
    string str1 ,str2 ;
    getline(cin,str1) ;
    getline(cin,str2) ;

    if(isAnnagram(str1,str2)) cout << "True" ;
    else cout << "false" ;
    return 0;
}