#include<bits/stdc++.h>
using namespace std ;

int isPair(int arr[],int x,int left,int right){
    int ctr =0 ;
    while(left<right){
        if (arr[left]+arr[right] == x){
            ctr++;
            left ++ ;
        }
        else if(arr[left]+arr[right] > x) right -- ;
        else left ++ ;
    }
    return ctr;
}

int triplet(int arr[],int n,int x){
    int ctr =0;
    for(int i=0;i<n;i++){
        int temp = isPair(arr,x-arr[i],i+1,n-1) ;
        if(temp) ctr+=temp;
    }
    return ctr;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i] ;

    int x ;
    cin >> x;

    cout << triplet(arr,n,x);
    return 0;
}