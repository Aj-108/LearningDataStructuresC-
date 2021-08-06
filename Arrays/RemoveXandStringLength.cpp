#include<bits/stdc++.h>
using namespace std ;

//Remove all x 
void removex(char str[]){
    if(str[0] == '\0') return ;

    if(str[0] != 'x'){
        removex(str+1);
    }else{
        int i=0;
        for(;str[i]!='\0';i++){
            str[i-1] = str[i] ;
        }
        str[i-1] = str[i] ;
        removex(str) ;
    }
}

int strLength(char str[]){
    if(str[0] == '\0') return 0 ;

    int smallLength = strLength(str+1) ;
    return 1+smallLength ;
}

int main(){
    char str[100] ;
    cin >> str ;
    cout << strLength(str);
    return 0 ;
}