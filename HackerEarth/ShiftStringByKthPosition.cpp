#include<bits/stdc++.h>
using namespace std;

int main(){
    string S ;
    getline(cin,S);
    int n = S.size();
    string shiftedS[n];
    int k ;
    cin >> k ;
    for(int i=0 ; i<n ; i++){
        if ( i+k < n )
            shiftedS[i] = S[ i+k ] ;
        else {
            shiftedS[i] = S[ (i+k)-n ] ;
        }
    }
    for(int i=0 ; i<n ;i++){
        cout << shiftedS[i] ;
    }
    return 0 ;
}