#include<bits/stdc++.h>
#include<unordered_map>
using namespace std ;

int main(){
    unordered_map<string,int> newMap ;

    // INSERT
    pair<string,int> p("abc",1) ;
    newMap.insert(p) ;
    newMap["def"] = 2 ;

    // find or access 
    cout << newMap["abc"] ;
    cout << newMap.at("abc") ;
    cout << newMap["gfg"] ; // make a key with value 0 

    // check presence 
    if(newMap.count("gfg")!= 0 ) cout << "key present " ;


    cout << newMap.size() ;
    newMap.erase("gfg") ;
    return 0 ;
}