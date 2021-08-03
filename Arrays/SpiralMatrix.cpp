#include<bits/stdc++.h>
using namespace std ;
#define R 4
#define C 5

void spiral(int arr[R][C]){
    int top =0 , bottom = R-1 ,right = C-1 ,left = 0;
    while(top<=bottom && left<=right ){
        for(int j = left ;j<=right;j++) cout << arr[top][j] <<" ";
        top++;
        for(int i = top ; i<=bottom ; i++) cout << arr[i][right]  << " ";
        right--;
        if(top<=bottom){
            for(int j = right;j>=left;j--) cout << arr[bottom][j] << " ";
            bottom--;
        }
        if(left<=right){
            for(int i=bottom ;i>=top;i--) cout << arr[i][left] << " ";
            left++;
        }
    }
    
}

int main (){
    int arr[R][C] ;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> arr[i][j] ;
        }
    }
    
    spiral(arr); 

    return 0 ;
}