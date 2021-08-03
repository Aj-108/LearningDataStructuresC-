//KADANES ALGORITHM
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n ;

    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;

    int MaxSum = arr[0] ;
    int TempSum = arr[0] ;

    for(int i=1 ;i<n;i++){
        if(TempSum < 0 ) TempSum = 0 ;
        TempSum += arr[i] ;
        MaxSum = max(MaxSum,TempSum);
    }

    cout << MaxSum ;
    return 0;
}