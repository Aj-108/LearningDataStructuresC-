#include<bits/stdc++.h>
using namespace std ;

void merge(int arr[],int n,int low,int mid,int high){
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
    for (int i=0;i<n;i++) cout << arr[i] ;
}

int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;
    int low,mid,high ;
    cin >> low >> mid >> high ;
    merge(arr,n,low,mid,high) ;
    return 0 ;
}