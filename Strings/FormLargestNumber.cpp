#include<bits/stdc++.h>
using namespace std ;

int main(){
    string str;
    cin >> str ;

    char temp;
    for(int i=0;i<str.size()-1;i++){
        for(int j=i+1;j<str.size();j++){
            if (str[i]<str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp ;  
            }
        }
    }
    cout << str ;

    //Or can use sort function
    sort(str.begin(), str.end(), greater<int>()) ;  // greater for sorting in decreasing order 

    return 0;
}