#include<bits/stdc++.h>
using namespace std ;

int isPair(int arr[],int n,int x){
    int ctr =0 ;
    int left =0,right = n-1 ;
    while(left<right){
        if (arr[left]+arr[right] == x) {
            left++;
            ctr ++ ;
        }
        else if (arr[left]+arr[right] > x) right --;
        else left++;
    }
    return ctr;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i] ;

    int x;
    cin >> x ;

    cout << isPair(arr,n,x);
    return 0;
}