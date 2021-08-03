#include<bits/stdc++.h>
using namespace std ;

int numberofones(int n){
    int count =0 ;
    while(n){// same as while (n!=0)
        n = n & n-1 ; // concept of n & n-1 run by an example like 19
        count ++ ;
    }
    return count ;
}

int main(){
    int n;
    cin >> n;

    cout << numberofones(n) ;

    return 0;
}