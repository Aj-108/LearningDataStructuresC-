#include<bits/stdc++.h>
using namespace std ;

int Bsearch(int arr[],int num,int low,int high){
    if(low > high){
        return -1;
    }

    int middle = (low+high)/2;
    
    if(arr[middle] == num){
        return middle +1;
    }
    if (arr[middle] < num){
        Bsearch(arr,num,middle+1,high);
    }
    else {
        Bsearch(arr,num,low,middle-1);
    }
}

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    int num;
    cin >> num ;

    cout << Bsearch(arr,num,0,n);

    return 0;
}