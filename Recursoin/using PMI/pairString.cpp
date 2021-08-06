#include<bits/stdc++.h>
using namespace std ;

void pairString(string str,int start,int end){
    if(end == 0 ) return ;
    if(end == 1) {
        cout << str[start] ;
        return ;
    }

    if(str[start] == str[start+1]){
        cout << str[start] <<"*" ;
    }
    else{
        cout <<str[start] ;
    }

    pairString(str,start+1,end-1);
    return ;
}

int main(){
    string str = "hello" ;
    pairString(str,0,str.length()) ;
    return 0 ;
}