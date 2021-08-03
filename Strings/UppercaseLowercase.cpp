// ASCII Uppre caser - 65 Lower - 97 difference 32  
#include<bits/stdc++.h>
using namespace  std;

int main(){
    string str  ;
    cin >> str;

    cout << "1.Upper case " << endl << "2.Lower Case " << endl <<"Choice : " ;
    int ch;
    cin >> ch ;

    for(int i=0;i<str.size();i++){
        if(ch==1){
            if(str[i]>90){
                str[i] = str[i] - 32 ;
             }
        }
        else {
            if(str[i] < 91){
                str[i] = str[i] + 32 ;
             }
        }
    }
    cout << str << endl ;

    // Inbuilt function for transforming string 
    transform(str.begin(), str.end(), str.begin(), ::toupper); // str.begin and str.end for passing string and another begin for index 
    cout << str << endl ;                                      // from where to make capitalize      

    transform(str.begin(), str.end(), str.begin() , ::tolower);
    cout << str << endl ;

    return 0;
}