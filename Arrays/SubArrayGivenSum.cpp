/***
 * Given an unsorted array A of size N of non negative integers , find a continous subArray which adds to a given sum S.
 * 
 * Constrains :: 1<=N<=10^5
 * 0<=A[i]<=10^10 
 ***/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n] ;
    for(int i=0 ;i<n;i++) cin >> arr[i] ;

    int S; 
    cin >> S;

    int i=0,j=0;

    int sum=0;
    
    while (j<n && sum+arr[j] <=S){
        sum += arr[j] ;
        j++;
    }

    if (sum==S) {
        cout << i+1 << " " << j+1 ;
        return 0;
    }
    while ( j<n ){
        sum+=arr[j];
        while( sum > S ){
            sum-=arr[i];
            i++;
        }

        if (sum == S){
            cout << i+1 << " " << j+1 ;
            return 0;
        }
        j++;
    }

    cout << "No subarray found" ;

    return 0;
}