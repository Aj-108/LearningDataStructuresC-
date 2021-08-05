#include<bits/stdc++.h>
using namespace std ;

bool checkNum(int arr[],int n,int x){
    if(n==0) return false ;
    
    if (arr[0] == x) return true ;
    return  checkNum(arr+1,n-1,x) ;
}

int main(){
    int arr[5] = {1,2,3,4,5} ;
    cout << checkNum(arr,5,8);
    return 0 ;
}