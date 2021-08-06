#include<bits/stdc++.h>
using namespace std ;


int dialPad(int num,string output[],string *str[]){
    if(num/10 == 0) {
        output[0] = "" ;
        return 1 ;
    }

    int smallOutputSize = dialPad(num/10,output,str) ;
    
    int count ;
    for(;str[num%10][count]!="/0";count++);

    int j=0;
    while(j<count-1){
        for(int i=0;i<smallOutputSize;i++){
            output[i+smallOutputSize] = output[i] + str[num%10][j] ;
        }
        j++;
    }
    for(int i=0;i<smallOutputSize;i++){
            output[i+smallOutputSize] = output[i] + str[num%10][j] ;
    }

    return count*smallOutputSize ;
}

int main(){
    int num ;
    cin >> num ;

    string **str = new string* [10] ;
    
    for(int i=1;i<10;i++){
        string input ;
        cin >> input ;
        str[i] = new string[input.size()] ;
        for(int j=0;j<input.size();j++){
            str[i][j] = input[j] ;
        } 
    }
    int count ;
    for(;str[num%10][count]!="/0";count++);
    cout <<count ;

    // string *output = new string[100];
    // int count = dialPad(num,output,str);
    // for(int i=0;i<count;i++){
    //     cout << output[i] <<"\n" ;
    // }
    return 0 ;
}