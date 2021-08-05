#include<bits/stdc++.h>
using namespace std ;

bool isSort(int arr[],int n){
    if( n==0 || n==1 )
        return true ;
    
    if(arr[0] > arr[1]){
        return false ;
    }

    bool isSmallerSorted = isSort(arr+1,n-1) ;
    return isSmallerSorted ;
}

bool isSort2(int arr[],int n){
    if( n==0 || n==1) return true ;

    bool isSmallerSorted = isSort2(arr+1,n--) ;
    if(!isSmallerSorted) return false ;
    if(arr[0] > arr[1]) return false ;
    return true ; 
}

int main(){

    return 0 ;
}