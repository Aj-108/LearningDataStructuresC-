#include<bits/stdc++.h>
using namespace std ;

int LastOccur (int arr[],int x,int low, int high){
    if (low > high ) {
        return -1 ;
    }

    int mid = (low+high)/2 ;

    if (arr[mid] == x){
        if(arr[mid] != arr[mid+1] ){
            return mid ;
        }
        else{
            LastOccur(arr,x,mid+1,high);
        }
    }

    if (arr[mid] < x){
        LastOccur(arr,x,mid+1,high);
    }
    else{
        LastOccur(arr,x,low,mid-1);
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    int x;
    cin >> x ;
     
    cout << LastOccur(arr,x,0,n);
    return 0;
}