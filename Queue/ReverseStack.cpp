#include<bits/stdc++.h>
using namespace std ;

void reverseStack(stack<int> s1,stack <int> s2){
    if(s1.empty()) return ;

    int x = s1.top() ;
    s1.pop();
    reverseStack(s1,s2);
    for(int i=0;i<s1.size();i++){
        s2.push(s1.top());
        s1.pop();
    }
    s2.push(x) ;

    for(int i=0;i<s2.size();i++){
        s1.push(s2.top());

    }
    return ;
}

int main(){
    stack <int> s1 ;
    s1.push(10) ;
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    stack<int> s2 ;
    reverseStack(s1,s2);

    cout << s1.top() <<"\n" ;
    cout << s1.top() <<"\n" ;
    cout << s1.top() <<"\n" ;
    cout << s1.top() <<"\n" ;
    cout << s1.top() <<"\n" ;
    return 0 ;
}