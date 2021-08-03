#include<bits/stdc++.h>
using namespace std ;
#define R 4
#define C 4

void searchMat(int arr[R][C],int x){
    cout << arr[0][3] ;
    int i=0,j=C-1;
    while(i<R && j>-1){
        if (arr[i][j] == x) cout << "found at (" << i << "," << j << ")";
        if(arr[i][j]<x) i++;
        else j-- ;
    }
    cout << "Element not found " ;
}

int main(){
    int arr[R][C] ;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> arr[R][C] ;
        }
    }

    int x ;
    cin >> x ;

    searchMat(arr,x) ;
    return 0 ;
}