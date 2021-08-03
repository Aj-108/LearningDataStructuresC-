#include<bits/stdc++.h>
using namespace std ;

int Bsearch(int arr[],int x,int low,int high){
    if (low > high ) {
        return -1 ;
    }

    int mid = (low+high)/2 ;

    if (arr[mid] == x){
        if(arr[mid] != arr[mid-1]){
            return mid ;
        }
        else{
            Bsearch(arr,x,low,mid-1);
        }
    }

    if (arr[mid] < x){
        Bsearch(arr,x,mid+1,high);
    }
    else{
        Bsearch(arr,x,low,mid-1);
    }
}

int Search(vector<int> v1,int x){
    for(int i=0;i<v1.size();i++){
        if (v1[i] == x){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int arr[n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    cout << Bsearch(arr,x,0,n-1);
    return 0;
}