#include<bits/stdc++.h>
using namespace std ;

int main(){
    string  str1 ;
    cin >>str1 ;

    stack<char> s1 ;

    for(int i=0;i<str1.size();i++){
        if(str1[i] == '{' || str1[i] == '(' || str1[i] == '['){
            s1.push(str1[i]) ;
        }

        if( (str1[i] == '}' && s1.top() == '{') || (str1[i] == ')' && s1.top() == '(') || (str1[i] == ']' && s1.top() == '[') ){
            s1.pop();
        }
        
    } 

    if(s1.empty()) cout << "paranthesis are balanced" ;
    else cout << "paranthesis are not balanced" ;

    return 0 ;
}