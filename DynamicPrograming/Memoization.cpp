#include<bits/stdc++.h>
using  namespace std ;

int fib_helper(int n , int *arr){
    // Base case
    if(n==1) return n ;
    if(n<=0) return 0 ;

    // check if already exits 
    if(arr[n]!= -1){
        return arr[n] ;
    } 

    // calling recursion 
    int res = fib_helper(n-1,arr) + fib_helper(n-2,arr) ;
    
    // save for future use 
    arr[n] = res ;
    
    return res ;
}

int fib(int n){
    int *arr = new int [n+1] ;
    for(int i=0;i<n;i++){
        arr[i] = -1 ;
    }
    return fib_helper(n,arr) ;
}