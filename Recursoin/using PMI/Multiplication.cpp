#include<bits/stdc++.h>
using namespace std ;

int multiply(int m,int n){
    if(n==0) return 0 ;

    int smallOutput = multiply(m,n-1) ;
    return m+smallOutput ;
}

int main(){
    cout << multiply(5,4);
    return 0 ;
}