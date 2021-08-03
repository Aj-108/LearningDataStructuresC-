#include<bits/stdc++.h>
using namespace std ;

void Subset(string str,string cur="",int i=0){
    if (i == str.size()){
        cout << str ;
        return ;
    }
    Subset(str,cur,i++);
    Subset(str,cur+str[i],i++);
    return ;
}

int main(){
    string str;
    cin >> str;
    Subset(str);
    return 0;
}