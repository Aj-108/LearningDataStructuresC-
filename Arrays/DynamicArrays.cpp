#include<bits/stdc++.h>
using namespace std ;

int main(){

    // Making Array of size 10,20
    // first create an array of pointers and then make them point towards an arrat of size 20 
    int **arr = new int*[10];
    for(int i=0;i<10;i++){
        arr[i] = new int[20] ;
    }

    int m,n ;
    cin >> m >> n ;
    int **arr2 = new int*[m] ;
    for(int i=0;i<m;i++){
        arr2[i] = new int[n] ;
        for(int j=0;j<n;j++){
            cin >>arr[m][n] ;
        }
    }
  

 
    for(int i=0;i<m;i++){
        delete [] arr2[i] ;
    }

    delete [] arr2 ; // Deleting pointer array in the last .. 

    return 0 ;
}