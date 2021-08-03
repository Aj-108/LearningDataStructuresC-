#include<bits/stdc++.h>
using namespace std ;

int root(int n){  // Time complexity Root(n)
    int i=1;
    while (i*i <= n){
        i++;
    }
    return i-1 ;
}

int rootFloor(int n){
    int low = 1, high = n , ans = -1 ;
    while (low <=high ){
        int mid = (low + high )/ 2 ;
        int mysq = mid * mid ;
        if (mysq == n){
            return mid ;
        }
        if (mysq > n ){
            high = mid -1 ;
        }
        else {
            low = mid + 1 ;
            ans = mid ;
        }
    }
    return ans ;
}

int main(){
    int n;
    cin >> n;

    cout << rootFloor(n) ;

    return 0;
}