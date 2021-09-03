#include<bits/stdc++.h>
using namespace std ;

int countDistinct(int *arr,int n){
    unordered_set<int> s ;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size() ;
}

int countDistinct2(int arr[],int n){
    unordered_set<int> s(arr,arr+n) ;
    return s.size() ;
}

int main(){
    int n ;
    cin >> n ;
    int * arr= new int [n] ;
    cout << countDistinct(arr,n) ;
    delete [] arr ;
}