#include<bits/stdc++.h>
using namespace std ;
#define R 3
#define C 3 

int median (int mat[R][C]){
    int Min = mat[0][0] , Max = mat[0][C-1] ;
    for(int i=1;i<R;i++){
        Min = min(Min,mat[i][0]) ;
        Max = max(Max,mat[i][C-1]) ;
    }
    int medpas = (R*C+1)/2 ;
    while(Min < Max){
        int mid = (Min+Max)/2 ;
        int midpas = 0 ;
        for(int i=0;i<R;i++)    midpas += upper_bound(mat[i],mat[i]+C,mid)-mat[i] ;
    }
}

int main(){
    int mat[R][C] ;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> mat[i][j] ;
        }
    }    

    median(mat) ;
    return 0 ;
}