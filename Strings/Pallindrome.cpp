#include<bits/stdc++.h>
using namespace std ;

bool pallindrome (string &str){
    int low =0,high = str.size()-1 ;
    while(low < high ){
        if(str[low]!=str[high]) return false ;
        low ++ ;
        high -- ;
    }
    return true ;
}

int main(){
    string str ;
    getline(cin,str) ;
    if(pallindrome(str)) cout << "string is pallindrome " ;
    else cout << "string is not pallindrome " ;


    return 0 ;
}