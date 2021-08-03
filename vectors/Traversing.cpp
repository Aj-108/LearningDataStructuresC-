#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(auto i : v){
        cout << i<<endl;
    }

    v.pop_back();

    vector <int> v2(3,50);
    // 50 50 50 

    swap(v,v2);  // Swapping values of vectors 
    v.sort(v.begin(),v.end());
    return 0;
}