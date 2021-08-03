#include<bits/stdc++.h>
using namespace std ;

int repeatEle(int arr[],int n){   // O(n) time but O(n) auxilarry space 
    vector<bool> v1(n-1,false);
    for(int i=0;i<n-1;i++){
        if(v1[arr[i]])  return i;
        v1[arr[i]] = true ;
    }
}

int findRepating(int arr[],int n){
    int slow = arr[0], fast = arr[0] ; 
    do{
        slow = arr[slow] ;
        fast = arr[arr[fast]] ;
    }   while(slow!= fast);
        slow = arr[slow] ;
        fast = arr[fast] ;
    return slow ;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout << repeatEle(arr,n);
    return 0 ;
}