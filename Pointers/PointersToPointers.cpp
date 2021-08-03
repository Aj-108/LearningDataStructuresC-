#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int *p ;
    p=&a ;
    cout << *p << endl ;   //return value of a

    int **q = &p ;    
    cout << *q << endl ;  //return value of p as deferenced only one time
    cout << **q << endl ;   //return value of a as deferenced 2 times 
    return 0;
}