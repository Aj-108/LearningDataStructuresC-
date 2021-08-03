#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >> n ;

    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;

    int k ;
    cin >> k ;

    int st=0,end=n-1;

    int ans=0;
    while(st < end){
        int sum = arr[st]+arr[end];
        if (sum == k){
            ans = 1;
            break;
        }
        else if (sum > k) end--;
        else st++;
    }
    cout << ans << endl ;

    return 0;
}