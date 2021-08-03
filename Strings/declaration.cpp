#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1(5,'n');  //String if size 5 with each element being n ...
    string str = "Archit" ;
    
    string str2 ;
    getline(cin,str2);  // For character array syntax is cin.getline(arr,size)
    cout << str2 ;

    if(str1.empty()) cout << "Tells whether string is empty or not" ;

    str2.compare(str1) ; // Compare str2 with str1

    str1.erase(1,3) ; //erase(Index,No. of characters to be deleted)
    str1.find("SubString to be found"); // returns index
    str1.insert(2,"insert at 2 index");

    int x;
    string s ="777" ;
    x=stoi(s) ;  // String to integer function (stoi)  to_string(x) to change integer into string 

    sort(str1.begin(),str1.end());
    return 0;
}