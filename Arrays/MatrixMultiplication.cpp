#include<bits/stdc++.h>
using namespace std ;

int main(){
    int r1,r2,c1,c2 ; 
    cin >> r1 >> c1 >> r2 >> c2 ;
    
    if(r1 != r2 ){
        cout << "Mission Abort " ;
        return 0;
    }

    int arr1[r1][c1] ;
    int arr2[r2][c2] ; 
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> arr1[i][j] ;
        }
    }
 
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin >> arr2[i][j] ;
        }
    }

    int res[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j] = 0;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c2;k++){
                res[i][j] += arr1[i][k] * arr2[k][j] ;
            }
        }
    }

     
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}