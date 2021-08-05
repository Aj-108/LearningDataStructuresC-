#include<bits/stdc++.h>
using namespace std ;

int firstIndex(int arr[],int n,int x){
    if(n==0) return -1 ;
    
    if(arr[0] == x) return 0 ;

    int ans = firstIndex(arr+1,n-1,x) ;
    if(ans!= - 1) return ans+1 ;
    return ans ;
}

int lastIndex(int arr[],int n,int x){
    if(n==0) return -1 ;

    if(arr[n-1] == x ) return n-1 ;

    return lastIndex(arr,n-1,x) ;
}

int lastIndex2(int arr[],int n,int x){
    if(n==0) return -1 ;

    int ans = lastIndex2(arr+1,n-1,x) ;

    if(ans != -1) return ans ;
    if(arr[0] == x) return n+1 ;
    return ans ;
}

int main(){
    int arr[5] = {1,5,6,5,6} ;
    cout << firstIndex(arr,5,5) <<"\n" ;
    cout << lastIndex2(arr,5,5) ;
    return 0 ;
}