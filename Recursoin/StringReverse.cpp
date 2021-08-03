#include<bits/stdc++.h>
using namespace std ;

void Reverse(string str,int n){
    if(n-1==0){
        cout << str[n-1];
        return ;
    }
    cout << str[n-1];
    Reverse(str,n-1);
    return ;
}

void reverse(string s){
    if(s.length() == 0){
        return ;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
    return ;
}

int main(){ 
    string str;
    cin >> str;
    Reverse(str,str.size());
    return 0;
}   