#include<bits/stdc++.h>
using namespace std ;

bool ispair(int *arr,int  n,int sum){
    unordered_set<int> s ;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i])!=s.end()){
            return true ;
        }
        s.insert(arr[i]) ;
    }
    return false ;
}

int main(){
    int n ;
    cin >> n ;
    int *arr = new int [n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    int sum ;
    cin >> sum ;
    ispair(arr,n,sum) ;
    return 0 ;
}