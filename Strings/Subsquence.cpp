#include<bits/stdc++.h>
using namespace std ;

bool Sub(string &s1,string &s2){
    if(s1.size() < s2.size()) return false ;
    int ctr =0 ,n=0;
    for(int i=0;i<s1.size() && n<s2.size();i++){
        if(s1[i] == s2[n]){
            n++;
            ctr++;
        }
        if(ctr == s2.size()){
            return true ;
        }
    }
    return false ;
}

bool subRecur(string s1,string s2,int n,int m){
    if(m == 0) return true ;
    if(n ==0  ) return false ;
    if(s1[n-1] == s2[m-1]) return subRecur(s1,s2,n--,m--);
    else return subRecur(s1,s2,n--,m) ;
}

bool isSub(string &s1,string &s2){
    reverse(s2.begin(),s2.end()) ;
    string s3 = s1+s2 ;
    int ctr = 0;
    int low = 0 , high = s3.size()-1 ;
    while(low < high){
        if (s3[low] == s3[high]){
            high --;
            ctr++;
        }
        low ++ ;
        if (ctr == s2.size()) return true ;
    } 
    return false ;
}

int main(){
    string s1,s2 ;
    getline(cin,s1);
    getline(cin,s2) ;
    if(subRecur(s1,s2,s1.size(),s2.size())) cout << "true " ;
    else cout << "false" ; 
    return 0 ;
}