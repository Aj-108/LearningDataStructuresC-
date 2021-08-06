#include<bits/stdc++.h>
using namespace std ;

int countZero(int n){
    if(n%10==0 && n/10 == 0) return 1 ;
    if(n/10 == 0) return 0 ;
    
    int smallOutput = countZero(n/10) ;
    if(n%10 == 0){
        smallOutput ++ ;
    }
    return smallOutput ;
}

int  main(){
    cout << countZero(90080) ;
    return 0 ;
}