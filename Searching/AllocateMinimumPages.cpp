#include<bits/stdc++.h>
using namespace std ;

bool isFeasible (int arr[],int n,int k,int ans){
    int req = 1,sum = 0 ;
    for(int i=0;i<n;i++){
        if(sum+arr[i] > ans){
            req ++;
            sum = arr[i] ;
        }
        else 
            sum +=arr[i] ;
    }
    return (req<=k) ;
}

int minPages(int arr[],int n,int k){
    int MAX = INT_MIN ;
    int sum =0 ;
    for(int i=0;i<n;i++){
        MAX = max(MAX,arr[i]) ;
        sum += arr[i] ;
    }
    int low = MAX , high = sum ,res = 0 ;
    while(low<=high){
        int mid = (low+high) / k ;
        if(isFeasible(arr,n,k,mid)) {
            res = mid ;
            high = mid-1 ;
        }
        else low= mid+1 ;
    }
    return res ;
}

int main(){
    int n ;
    cin >> n ;

    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;

    int k ;
    cin >> k ;

    return 0;
}