#include<bits/stdc++.h>
using namespace std ;

bool isSafe(int** arr,int n,int x,int y){
    for(int i=0;i<n;i++){
        if (x-i >=0 || y-i >=0 || y+i <n )
        {
            if (arr[x-i][y-i] ==1 )
                return false;
            if (arr[x-i][y] ==1 )
                return false; 
            if (arr[x-i][y+i] == 1){
                return false;
            }  
        }
        else {
            return true;
        }
    }
    return true ;
}

bool nQueen(int** arr,int n,int x){
    if (x>=n ) return true;

    for (int y=0;y<n;y++){
        if (isSafe(arr,n,x,y)){
            arr[x][y] = 1 ;
            if(nQueen(arr,n,x+1)){
                return true;
            }

            arr[x][y] = 0;
        }
    }
    return false ;
}

int main(){
    int n;
    cin >> n;


    int** arr = new int*[n]; 
    for(int i=0;i<n;i++){
        arr[i]= new int [n] ;
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }
    cout << "hey" ;
    //if(nQueen(arr,n,0)){
        cout << nQueen(arr,n,0) << endl ;
         for(int i=0;i>n;i++){
            for(int j=0;j<n;j++){
                cout << arr[i][j];
            } cout << endl ;
        //}    
    }
    return 0;
}