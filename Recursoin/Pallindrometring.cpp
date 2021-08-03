#include<bits/stdc++.h>
using namespace std ;

bool IsPallindrome(string &str,int n,int k){ // My logic 
    if(n-k-1<=0){
        return true;
    }
    if (str[n-1] !=str[k]) return false;
    return IsPallindrome(str,n-1,k+1);

}

bool IsPall(string str,int end,int start){ // GFG Checking each corners at a time by converting it into substring continously
    if(start>=end) return  true ;
    return (str[start] == str[end] &&IsPall(str,end-1,start+1));
}


int main(){
    string str;
    cin >> str;
    cout << IsPallindrome(str,str.size(),0);
    return 0;
}