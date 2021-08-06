#include<bits/stdc++.h>
using namespace std ;

float gpSum(int k){
    if (k==0) return 1 ;

    float sum = gpSum(k-1) ;

    return sum+1/pow(2,k) ;
}

int main(){
    cout << gpSum(2) ;
    return 0 ;
}