#include<bits/stdc++.h>
using namespace std ;

int main(){
    string str ;
    getline(cin,str) ;
    vector<int> count(26,0) ;
    for(int i=0;i<str.size();i++){
        count[(str[i])-'a'] ++ ;
    }
    for(int i=0;i<26;i++ ){
        if (count[i] > 0) {
            cout <<"frequency of "<< char(i+97) << " is ";
            cout << count[i] << endl ;
        }
    }

    return 0 ;
}