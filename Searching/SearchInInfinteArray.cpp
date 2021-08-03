#include<bits/stdc++.h>
using namespace std ;

int BinarySearch(int arr[],int x,int low ,int high){
    int mid = (low+high)/2 ;
    while(low<=high){
        if (arr[mid] == x)  return mid ;
        if (arr[mid] > x) return BinarySearch(arr,x,mid+1,high);
        else return BinarySearch(arr,x,low,mid-1) ;
    }
    return -1;
}

int search(int arr[],int n,int x){
    int i =1;
    while(arr[i]<x){
        i *= 2;
    }
    if ( arr[i] == x) return i;
    return BinarySearch(arr,x,i/2+1,i);
}

//Infinite size means a very long one in terms of millions ..
int main(){
    int n;
    cin >> n ;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    int x;
    cin >> x;

    cout << search(arr,n,x);
    return 0;
}