#include<bits/stdc++.h>
using namespace std ;

int isPair(int arr[],int x,int left,int right){
    while(left<right){
        if (pow(arr[left],2)+ pow(arr[right],2) == x) return true ;
        else if (pow(arr[left],2)+ pow(arr[right],2) > x) right -- ;
        else left-- ;
    }
    return false ;
}

int isTriplet (int arr[],int n){
    for(int i=n-1;i!=0;i++){
        if(isPair(arr,pow(arr[i],2),0,i-1)) return true;
    }
    return false ;
}

int main (){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i] ;

    cout << isTriplet(arr,n);
}