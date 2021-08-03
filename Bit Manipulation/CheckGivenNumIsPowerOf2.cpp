#include<bits/stdc++.h>
using namespace std ;

// n and n-1 bit are different by first 1 in n-1 .... when 1 comes all the bits at roght of  1 and 1 changes to opposite. 
//n && has taken for checking of zero 
bool ispower2 (int n){
    return (n && !(n & n-1)) ;
}

int main(){
    int n;
    cin >> n;

    cout << ispower2(n);

    return 0;
}