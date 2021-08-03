#include<bits/stdc++.h>
using namespace std ;

int main(){
    int r1,c1;
    cin >> r1 >> c1 ;

    int arr[r1][c1] ;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> arr[i][j] ;
        }
    }
    
    int k;
    cin >> k;
    
    int ans = -1;
    int i=0,j=c1-1;
    while(i <r1 && j >= 0){
        if(arr[i][j]== k) {
            ans = 0 ;
            break;
        }
        if(arr[i][j] < k) i++;
        else j--;
    }
    if(ans == 0) cout << "Element found" ;
    else cout << "element is not in matrix" ;
    return 0;
}