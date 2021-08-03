#include<bits/stdc++.h>
using namespace std ;

int HoaresPartition(int arr[],int l,int h){
    int pivot = arr[l] ;
    int i=l-1 ,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<=j) return j;
        swap(arr[i],arr[j]);
    }
}

void Partition(int arr[],int p ,int l,int h){ // My version 
    for(int i=l;i<h;i++){
        if (arr[p] > arr[i] && i>p){
            swap(arr[p],arr[i]);
            p=i;
        }
        else if(arr[p] <= arr[i] && i<p){
            swap(arr[p],arr[i]);
            p=i;
        }
    }
 
    for(int i=0;i<h;i++) cout << arr[i] << " " ;
} 

int LometoPartition(int arr[],int p,int l,int h){
    int pivot = arr[h];
    int i = l -1 ;
    for(int j=0;j<=h-1;j++){
        if(arr[j] < arr[h]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]) ;
    return i+1;
}

int main(){
    int n,p;
    cin >> n >> p;
    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;
    
    cout << LometoPartition(arr,p,0,n) ;
    return 0;
}