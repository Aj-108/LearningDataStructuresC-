#include<bits/stdc++.h>
using namespace std;

int sum(int n,int k){
    if (n==0) return k;
    return sum(n/10,k+(n%10));
}

int main(){
    int n;
    cin >> n;
    cout << sum(n,0);

    return 0;
}