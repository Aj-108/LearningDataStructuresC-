#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >> n ;
    int arr[n] ;
    int arr2[n] ;
    for(int i=0 ; i<n ;i++)  {
        cin >> arr[i] ;
        arr2[i] = 0 ;
    }
    for(int i=0 ; i<n ;i++){
        int temp = 1 ;
        if(arr2[i] != -1){
            for(int j=i+1 ; j<n ; j++){
                if(arr[i] == arr[j] ){
                    arr2[j] = -1 ;
                    temp +=1 ;
                }
            }
            arr2[i] = temp ;
        }
    }
    for(int i=0 ; i<n ;i++){
       if(arr2[i] > 1 ){
           cout << arr2[i] ;
           break;
       } 
    }
    return 0;
}