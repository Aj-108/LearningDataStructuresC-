#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    cin >> n  ;
    
    int arr[n][n] ; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j] ;
        }
    }

    int temp ;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){   //  j = i ensures that j>i so that swap occurs only in upper triangle 
            if( i!=j ){
                temp = arr[i][j];
                arr[i][j] = arr[j][i] ;
                arr[j][i] = temp ;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }

    return 0;
}