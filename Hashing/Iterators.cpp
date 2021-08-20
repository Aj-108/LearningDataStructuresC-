#include<bits/stdc++.h>
using namespace std ;

int main(){
    unordered_map <string,int> newMap ;
    newMap["abc"] = 1 ;
    newMap["abc2"] = 2 ;
    newMap["abc3"] = 3 ;
    newMap["abc4"] = 4 ;
    newMap["abc5"] = 5 ;

    unordered_map<string,int> :: iterator it = newMap.begin() ;
    while(it!=newMap.end()){
        cout << "Key : " << it->first << " value : " << it->second <<endl; 
        it++ ;
    }
    
    //find 
    unordered_map<string,int> :: iterator it2 = newMap.find("abc") ;
    // can also be usef in erase 

    return 0 ;
}