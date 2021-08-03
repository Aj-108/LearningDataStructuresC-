//  MaxSubArraySum = Total Sum of array - Sum of non-contributing elements
// For finding non-contributing elements use kadanes algorithm with sign of each elemnts reverse
#include<bits/stdc++.h>
using namespace std ;

int kdane(int arr[],int n){
    int MaxSum = arr[0] ;
    int TempSum = arr[0] ;

    for(int i=1 ;i<n;i++){
        if(TempSum < 0 ) TempSum = 0 ;
        TempSum += arr[i] ;
        MaxSum = max(MaxSum,TempSum);
    }
    return MaxSum;    
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    int ArraySum = 0;
    
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
        ArraySum += arr[i] ;
    }

    int nonwrapsum = kdane(arr,n);
    int wrapsum ;
    
    wrapsum = ArraySum + kdane(arr,n) ;  // -- = +
    cout << max(wrapsum,nonwrapsum) ;

    return 0;
}