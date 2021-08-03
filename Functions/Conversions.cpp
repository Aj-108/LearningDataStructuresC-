#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int x = 1;
    int ans = 0 ;
    int y ;
    while( n>0 ){
        y = n%10 ;
        ans += X*y ;
        x *= 2 ;
        n /= 10 ;
    }
    return ans ;
}

int octalToDecimal(int n){
    int x = 1;
    int ans = 0 ;
    int y ;
    while( n>0 ){
        y = n%10 ;
        ans += x*y ;
        x *= 8 ;
        n /= 10 ;
    }
    return ans ;    
}

int hexadecimalToDecimal(int n){
    int x = 1;
    int ans = 0 ;
    int s = n.size() ;

    for(int i=s-1;i>=0;i--){
        if(n[i] >= '0' && n[i] <='9'){
            ans += x * (n[i] - '0') ;
        }
        else{
            ans += x * ( n[i]-'A' + 10 )
        }
        x *= 16 ;
    }
    return ans ;
}

int decimalToBinary(int n){
    
}


int main(){
    int n;
    cin >> n ;

    cout << octalToDecimal(n) ;

    return 0;
}