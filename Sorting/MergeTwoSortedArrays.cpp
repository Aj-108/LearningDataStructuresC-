#include<bits/stdc++.h>
using namespace std ;

void srt(int arr[],int arr2[],int n,int m){
    int i=0,j=0;
    while(i<n && j<m){
        if (arr[i] <= arr2[j] ) {
            cout << arr[i] << " ";
            i++;
        }
        else{
            cout << arr2[j] <<" " ;
            j++;
        }
    }
    while(i<n) {
        cout <<  arr[i] << " " ;
        i++ ;
    } 
    while(j<m) {
        cout << arr2[j]<<" " ;
        j++ ;
    }
    return ;
}

int main(){
    int n,m ;
    cin >> n ;

    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;
    
    cin >> m ;
    int arr2[m] ;
    for(int i=0;i<m;i++) cin >> arr2[i] ;
    
    srt(arr,arr2,n,m);
    return 0 ;
}