/***
 * 
 *  You are given an array A of N integers including 0.the task is to find the smallest positive number missing from array.
 * 
 *  Constrains : 1<=N<=10^6
 *              -10^6<=Ai<=10^6
 ****/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n " ;
    cin >> n ;

    int arr[n] ;
    for(int i=0;i<n;i++) cin>>arr[i];

    const int N = 1e6 ;
    bool check[N];

    for(int i=0 ; i<N;i++){
        check[i] = false ;
    }

    for(int i=0 ; i<n; i++){
        if (arr[i] >= 0){
            check[arr[i]] = true ;
        }
    }

    int ans = -1 ;

    for(int i=0;i<N;i++){
        if(check[i] == false){
            ans = i;
            break;
        }
    }

    cout << ans << endl ;

    return 0;
}