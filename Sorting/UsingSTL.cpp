#include<bits/stdc++.h>
using namespace std ;

int main(){
    int arr[] = {1,7,3,6,23,7,3,5,35,2,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n) ; // ascending orer
    for(auto i : arr) cout << i <<" ";
    sort(arr,arr+n,greater<int>()) ; // Descending order
    cout << endl ;
    for(auto i : arr) cout << i ;
    return 0 ;
}