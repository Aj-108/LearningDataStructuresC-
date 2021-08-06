#include<bits/stdc++.h>
using namespace std ;

void toh(int n,char src,char aux,char dest){
    if( n==1 ){
        cout << src <<" " <<dest <<"\n" ;
        return ;
    }

    toh(n-1,src,dest,aux) ;
    cout << src <<" " <<dest <<"\n" ;
    toh(n-1,aux,src,dest);
    return ;
}

int main(){
    toh(3,'a','b','c');
    return 0 ;
}