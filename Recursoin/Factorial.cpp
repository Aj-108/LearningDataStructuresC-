#include<bits/stdc++.h>
using namespace std ;

int fact(int n){    //Not tail recursive
    if(n==1) return 1;
    return n*fact(n-1);
}

int fact2(int n,int k){ // k intial value is 1 tail recursive
    if(n==1)  return k;
    return fact2(n-1,k*n);
}

int main(){
    int n;
    cin >> n;
    fact(n);
    return 0;
}