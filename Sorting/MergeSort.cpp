#include<bits/stdc++.h>
using namespace std ;

void merge(int arr[],int mid,int low,int high){
    int n1 = mid-low+1 ;
    int n2 = high - mid ;
    int left[n1],right[n2] ;
    for(int i=0;i<n1;i++) left[i] = arr[low+i] ;
    for(int i=0;i<n1;i++) right[i] = arr[mid+i] ;
    int i=0,j=0,k=low ;
    while(i<n1 && j < n2){
        if (left[i] <= right[j]) {
            arr[k] = left[i] ;
            k++;
            i++;
        }
        else{
            arr[k] = right[j] ;
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k] = left[i] ;
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j] ;
        j++;
        k++;
    }
}


void mergeSort(int arr[],int l,int r){
    if(r>l){
        int m = l+(r-l)/2 ;
        mergeSort(arr,l,m) ;
        mergeSort(arr,m+1,r) ;
        merge(arr,m,l,r) ;
    }
}

int main(){
    int n ;
    cin >> n ;

    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;

    mergeSort(arr,0,n) ;
    for(auto i : arr) cout << i ;
    return 0 ;
}