#include<bits/stdc++.h>
using namespace std ;

bool isPallindrome(string s,int start,int end){
    if(end-start == 1 || end-start == 0 ) return true ;

    if(s[start] != s[end-1]){
        return false ;
    }

    bool check = isPallindrome(s,start+1,end -1) ;
    return check ;
}

int main(){
    cout << isPallindrome("abba",0,4) ;
    return 0 ;
}