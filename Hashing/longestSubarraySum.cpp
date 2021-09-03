#include<bits/stdc++.h>
using namespace std ;

int isSum(int arr[],int n,int sum){
    int preSum =0 ;
    set<int> s ;
    int res = INT_MIN ;
    for(int i=0;i<n;i++){
        if(preSum == sum){
            res = max(res,i+1) ;
        }
        if(s.find(preSum-sum)!=s.end()){

        }
    }
}