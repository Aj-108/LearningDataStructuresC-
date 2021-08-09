#include<bits/stdc++.h>
using namespace std ;

int main (){
    string str ;
    cin >> str ; 

    stack <char> s1 ;
    int count = 0 ;
    int size = 0 ;
    bool ans = true ;
    for(int i=0;i<str.size();i++){
        if(str[i]!= ']' && str[i]!= ')'){
            s1.push(str[i]) ;
            size++ ;
        }
        else{
            while(true){
                if(s1.top() != '[' && s1.top() != '('){
                    s1.pop() ;
                    count ++ ;
                }
                else{
                    s1.pop() ;
                    if(count <= 1 ) {
                        ans = false ;
                    }
                    count = 0 ;
                    break ;
                }
            }
            if(!ans) break ;
        }
    }

    if (ans) cout << "Not rebundant" ;
    else cout << "rebundant" ;


    return 0 ;
}