#include<bits/stdc++.h>
using namespace std ;


int partition(int arr[],int l,int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j=0;j<=h-1;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]) ;
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1 ;
}

void qsort(int arr[],int l,int h){
    if(l<h){
        int p = partition(arr,l,h) ;
        qsort(arr,l,p-1);
        qsort(arr,p+1,h);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {5,3,64,21,8,2,4};
    int n = sizeof(arr) / sizeof(arr[0] ) ;

    qsort(arr,0,n-1);
    printArray(arr,n) ;

    return 0;    
}