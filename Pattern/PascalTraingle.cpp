// 1
// 11
// 121
// 1331
// 14641

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int sum = 1;
    while(n<=2){
        sum *= n;
        n--;
    }
    return sum ;
}

int main(){
    int n ;
    cin >> n ;

    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << (fact(i))/(fact(j)*fact(i-j)) << " " ;
        }
        cout << endl ;
    }
    return 0;
}