#include<bits/stdc++.h>
using namespace std ;

void fun (int n){
    if(n==0) return ;
    fun(n-1);
    cout << n ;
}

void fun2(int n, int k){    //Using tail recursion 
    if(n==0) return ;
    cout <<  k ;
    fun2(n-1,k+1) ;
}
int main(){
    int n ;
    cin >> n ;
    fun(n);
    return 0;
}