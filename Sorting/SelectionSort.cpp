#include<bits/stdc++.h>
using namespace std ;
//      Smallest element is sent to the front 

void SelectSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_id = i ;
        for(int j = i+1;i<n;i++){
            if(arr[j]<arr[min_id]) min_id = j ;
        }
        swap(arr[min_id],arr[i]);
    } 
}

//Naive Method
void SelectionSort(int arr[],int n){
    int temp[n] ;
    for(int i=0;i<n;i++){
        int min_id = 0 ;
        for(int j=1;j<n;j++){
            if (arr[j]<min_id) min_id = arr[j] ;
        }
        temp [i] = min_id ;
        arr[min_id] = INT_MAX;
    }

    for(auto i : temp) cout << i ; 
}

int main(){
    int n;
    cin >> n;

    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;

    SelectionSort(arr,n) ;
    return 0;
}