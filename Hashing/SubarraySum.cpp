#include<bits/stdc++.h>
using namespace std ;

bool isSum(int arr[],int n,int sum){
    int preSum = 0 ;
    unordered_set <int> s ;
    for(int i=0;i<n;i++){
        if(preSum == sum ) return true ;
        if(s.find(preSum-sum) != s.end()) return true ;
        s.insert(preSum) ;
    }
}

int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    return 0 ;
}