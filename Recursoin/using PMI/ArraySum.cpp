#include<bits/stdc++.h>
using namespace std ;

int arraySum(int arr[],int n){
    if(n == 0 ) return 0 ;
    
    int smallerSum = arraySum(arr+1,n-1) ;

    return smallerSum + arr[0] ;
}

int main(){
    int arr[6] = {1,2,3,4,5,6} ;
    cout << arraySum(arr,6);
    return 0 ;
}