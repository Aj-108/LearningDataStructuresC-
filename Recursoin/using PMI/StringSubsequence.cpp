#include<bits/stdc++.h>
using namespace std ;

void stringSub2(string input,string output){
    if(input.empty()) {
        cout << output <<"\n";
        return ;
    }

    stringSub2(input.substr(1),output);
    stringSub2(input.substr(1),output+input[0]); 
}

int stringSub(string str,string output[]){
    if(str.empty() ) {
        output[0] = "" ;
        return 1 ;
    }

    string smallString = str.substr(1) ;
    int samllOutputSize = stringSub(smallString,output) ;

    for(int i=0;i<samllOutputSize;i++){
        output[i+samllOutputSize] = str[0] + output[i] ;
    }

    return 2*samllOutputSize ;
}

int main(){
    string input ;
    cin >> input ;

    string *output = new string[100] ;
    int count = stringSub(input,output) ;
    for(int i=0;i<count;i++){
        cout << output[i] <<"\n" ;
    }

    return 0 ;
}