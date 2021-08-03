#include<bits/stdc++.h>
using namespace std ;

int partition(int arr[],int l,int h){
    int i = l-1 , j= h+1 , pivot= arr[l] ;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<=j) return j;
        swap(arr[i],arr[j]) ;
    }
}

void qSort(int arr[],int l,int h){
    if (l<h){
        int p = partition(arr,l,h) ;
        qSort(arr,l ,p);
        qSort(arr,p+1,h);
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] ;
    }
}

int main(){
    int arr[] = {5,2,5,7,2,4} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    qSort(arr,0,n-1);
    printArr(arr,n);
    return 0 ;
}