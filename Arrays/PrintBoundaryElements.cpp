#include<bits/stdc++.h>
using namespace std ;
int arr[4][4] ;

void print(int arr[][4]){
    int i=0,j=0;
    while(i<4){
        if(j!=4){
        cout << arr[i][j] <<" ";
        j++;
        }
        else {
            i++;
            if(i!=4)    cout << arr[i][j-1] <<" " ;
        }
    }
    j -= 2;
    i--;
    while(i>-1){
        if(j!=-1){
            cout << arr[i][j] << " " ;
            j--;
        }
        else{
            i--;
            if(i!=-1) cout << arr[i][j+1] <<" " ;
        }
    }
}

int main(){
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    
    print(arr);
    return 0 ;
}