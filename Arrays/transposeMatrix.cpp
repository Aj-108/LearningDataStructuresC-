#include<bits/stdc++.h>
using namespace std ;
#define R 3
#define C 3

void transpose(int arr[R][C]){
    for(int i=0;i<R;i++){
        for(int j=i+1;j<C;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){
    int arr[R][C] ;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> arr[i][j] ;
        }
    }
    transpose(arr) ;

    return 0 ;
}

