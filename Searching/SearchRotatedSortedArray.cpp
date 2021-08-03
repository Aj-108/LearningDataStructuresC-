#include<bits/stdc++.h>
using namespace std ;

int  SearchRotate(int arr[],int n,int x ){
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low + high)/2 ;
        if (arr[mid] == x) return mid;
        if (arr[mid] > arr[low]) {              // Left half is sorted
            if (arr[low] <= x && arr[mid] > x)
                high = mid-1;
            else
                low = mid+1;
        }
        else{
            if(arr[high]>=x && arr[mid]<x)      // Right half is sorted 
                low = mid+1 ;
            else
                high = mid-1 ;
        }
    }
    return -1;
}

int main(){
    int n ; 
    cin >> n;
     
    int arr [n] ;
    for(int i=0;i<n;i++) cin >> arr[i];

    int x ;
    cin >> x;

    cout << SearchRotate(arr,n,x);
    return 0;
}