#include<bits/stdc++.h>
using namespace std ;
// biggest element at the last

int main(){
    int n ;
    cin >> n ;

    int arr[n] ;
    for( int i=0;i<n;i++) cin >> arr[i] ;

//O(n^2) time complexity
    for(int i=0;i<n-1;i++){
        bool swapped = false ;
        for(int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true ; 
            } 
        }
        if (swapped == false) break ;
    }
    for(auto i : arr) cout << i<< " " ;
    return 0 ;
}