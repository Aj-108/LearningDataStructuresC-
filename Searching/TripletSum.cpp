#include<bits/stdc++.h>
using namespace std ;

bool isPair(int arr[],int x,int left,int right){
    while(left<right){
        if (arr[left]+arr[right] == x) return true ;
        else if(arr[left]+arr[right] > x) right -- ;
        else left ++;
    }
    return false;
}

bool Triplet(int arr[],int n ,int x){
    for(int i=0;i<n;i++){
        if ( isPair(arr,x-arr[i],i+1,n-1) ) return true ;
    }
    return false ;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    int x ;
    cin >> x;

    if(Triplet(arr,n,x)) cout <<"Triplet found ";
    return 0;
}