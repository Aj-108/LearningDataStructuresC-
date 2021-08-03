#include<bits/stdc++.h>
using namespace std ;

int getBit(int n,int i){        //checking bit at a particlar number
    return ((n & (1<<i))!=0) ;
}

int setBit(int n , int i){  // making bit at ith position as 1 and making it 0 is known as clearBit
    return (n | (1<<i)) ;
}

int clearBit(int n, int i){
    int mask = ~(1<<i);
    return ( n & mask ) ;
}

int updateBit(int n,int i,int value){   // Value is also given for bit 0 or 1
    int mask = ~(1<<i);
    n = n & mask ;  // first we clear the bit at the given position
    return n | ( value << i ) ; // We change the value  at i position (setBit)
}

int main(){
    int n , i;
    cin >> n >> i;
    
    cout << getBit(n,i) ;
    return 0;
}