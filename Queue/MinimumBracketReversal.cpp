#include<bits/stdc++.h>
using namespace std ;

int main(){
    string str ;
    getline(cin,str) ;
   
    stack <int> s1 ;


    for(int i=0;i<str.size();i++){

        if(str[i] == '}')    {
            if(s1.empty()) {
                s1.push(str[i]) ;
            }
            else {
                if (s1.top() == '}') {
                    s1.push(str[i]) ;
                }
                else{
                    s1.pop() ;
                }
            }
        }
        else {
            if(s1.empty()){
                s1.push(str[i]) ;
            }
            else {
                if (s1.top() == '{'){
                    s1.push(str[i]);
                }
                else{
                    s1.pop();
                }
            }
        }
    }

    if(s1.size()%2 == 0 ) cout << s1.size()/2 ;
    else cout <<"-1" ;
    return 0 ;
}