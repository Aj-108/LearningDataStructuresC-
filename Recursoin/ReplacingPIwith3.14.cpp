#include<bits/stdc++.h>
using namespace std;

void Replace(string str){
    if(str.size() == 0) {
        return ;
    }

    if(str[0] == 'p' && str[1] == 'i'){
        cout << 3.14 ;
        Replace(str.substr(2));
        return;
    }
    cout << str[0];
    Replace(str.substr(1));
    return;
}

int main(){
    string str;
    cin >> str;
    Replace(str);
    return 0;
}