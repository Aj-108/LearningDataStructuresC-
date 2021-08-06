#include<bits/stdc++.h>
using namespace std ;

int sToi(string s,int start,int end){
    if(end == 1 ) return int(s[start]-'0') ;

    int smalllOutput = sToi(s,start+1,end-1) ;

    int a = s[end-1]-'0';
    return smalllOutput*10 + a ;
}

int main(){

    cout << sToi("121",0,3) ;

    return 0 ;
}