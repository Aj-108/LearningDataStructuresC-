#include<bits/stdc++.h>
using namespace std ;

int FirstOccur(int arr[],int x,int low,int high){
    if (low > high ) {
        return -1 ;
    }

    int mid = (low+high)/2 ;

    if (arr[mid] == x){
        if(arr[mid] != arr[mid-1]){
            return mid ;
        }
        else{
            FirstOccur(arr,x,low-1,high);
        }
    }

    if (arr[mid] < x){
        FirstOccur(arr,x,mid+1,high);
    }
    else{
        FirstOccur(arr,x,low,mid-1);
    }
}


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

int CountOccur(int arr[],int n,int x){
    int first = FirstOccur(arr,x,0,n);
    if (first == -1 )
        return 0;
    else {
        return (LastOccur(arr,x,0,n)-first+1) ;
    }
}

 
int main (){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    int x;
    cin >> x ;
     
    cout << CountOccur(arr,n,x);

    return 0;
}