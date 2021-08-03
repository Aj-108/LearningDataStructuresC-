#include<bits/stdc++.h>
using namespace std ;

// var = (condition) ? (expression:true) : (expression:false) ;

double Median(int arr[],int n1,int arr2[],int n2){    
    int low =0 ,high = n1 ;
    while(low<=high){
        int i1 = (low+high)/2 ;
        int i2 = ((n1+n2+1)/2) - i1 ;
        int min1 = (i1==n1) ? INT_MAX : arr[i1] ;
        int max1 = (i1==0) ? INT_MIN : arr[i1-1] ;
        int min2 = (i2==n1) ? INT_MAX : arr2[i2] ;
        int max2 = (i2==0) ? INT_MIN : arr2[i2-1] ;
        if (max1 <= min2 && max2 <=min1){
            if((n1+n2)%2 == 0)
                return ( (double) (max(max1,max2) + min(min1,min2)) / 2 );            
            else    
                return ( (double) max(max1,max2)) ;
        }
        if (max1>min2)  high = i1-1 ;
        else low = i1+1;
    }
}

int main(){
    int n1,n2;
    cin >> n1;

    int arr[n1] ;
    for(int i=0;i<n1;i++) cin >> arr[i] ;

    cin >> n2 ;
    int arr2[n2];
    for(int i=0;i<n2;i++) cin >> arr2[i] ;

    if (n1>n2) Median(arr,n1,arr2,n2) ;
    else Median(arr2,n2,arr,n1) ;
    return 0;
}