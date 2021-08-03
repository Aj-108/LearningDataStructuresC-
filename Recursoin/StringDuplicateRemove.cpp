#include<bits/stdc++.h>
using namespace std ;

string Remove(string str){
    if (str.length() == 0){
        return "";
    }

    char ch = str[0] ;
    string ans  = Remove(str.substr(1));

    if (ch == ans[0]){
        return ans ;
    }
    return ans+ch;
}

int main(){
    string str ;
    cin >> str ;
    cout << Remove(str);
    return 0;
}