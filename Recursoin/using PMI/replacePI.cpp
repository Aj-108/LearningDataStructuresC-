#include<bits/stdc++.h>
using namespace std ;

void piReplace(string s ,int start,int length){
    if(length == 1) {
        cout << s[start] ;
        return ;
    }

    if(length == 0) return ;

    if(s[start] == 'p' && s[start+1] == 'i'){
        cout << 3.14 ;
        piReplace(s,start+2,length-2) ;
    }
    else{
        cout << s[start] ;
        piReplace(s,start+1,length-1) ;
    }
}

int main(){
    string s = "pipoapidaspi" ;
    piReplace(s,0,s.length()) ;

    return 0 ;
}