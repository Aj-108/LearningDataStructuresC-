#include<bits/stdc++.h>
using namespace std ;
#define R 3
#define C 3

void rotate90(int arr[R][C]){
     
    for(int i=0;i<R;i++){
        for(int j=i+1;j<C;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    // for(int i=0;i<R/2;i++){
    //     for(int j=0;j<C;j++){
    //         swap(arr[i][j],arr[R-i-1][j]);
    //     }
    // }

    for(int i=0;i<R;i++){
        int low =0 ,high = R-1 ;
        while(low < high){
            swap(arr[low][i],arr[high][i]);
            low ++;
            high -- ;
        }
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl ;
    }

}

int main(){
    int arr[R][C] ;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> arr[i][j] ;
        }
    }

    rotate90(arr); 
    return 0 ;
}