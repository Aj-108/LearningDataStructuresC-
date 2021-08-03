#include<bits/stdc++.h>
using namespace std ;

void arrUnion(int arr[],int arr2[],int n,int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(i!=0 && arr[i] == arr[i-1]) {
            i++;
            continue ;
        }
        if (j!=0 && arr2[j]==arr2[j-1]){
            j++;
            continue ;
        }
        if(arr[i] == arr2[j]){
            cout << arr[i] << " ";
            i++;
            j++;
        }
        else if (arr[i] < arr2[j]){
            cout << arr[i] << " ";
            i++ ;
        }
        else{
            cout << arr2[j] << " ";
            j++;
        }
    }

    while(i<n) {
        if ( (i==0 || arr[i]!=arr[i-1]) && arr[i] != arr2[j-1] ){ 
            cout << arr[i] <<" ";
            i++;
        }
        else i++ ;
    }

    while(j<m) {
        if ( ( j==0 || arr2[j]!=arr2[j-1]) && arr2[j] != arr[i-1] ){ 
            cout << arr2[j] <<" ";
            j++;
        }
        else j++;
    }
}

int main(){
    int n;
    cin >>n ;
    int arr[n] ;
    for(int i=0;i<n;i++)   cin>> arr[i] ;

    int  m; 
    cin >> m ;
    int arr2[m] ;
    for(int i=0;i<m;i++) cin >> arr2[i] ;

    arrUnion(arr,arr2,n,m) ;
    return 0;
}