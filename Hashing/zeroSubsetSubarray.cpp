#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    int presum =0 ;
    set<int> s ;
    for(int i=0;i<n;i++){
        presum += arr[i] ;
        if(s.find(presum)!= s.end()){
            s.insert(presum) ;
        }
        else {
            presum = INT_MIN ;
            break ;
        }
    }
    if(presum == INT_MIN) cout << "Subarray with zero sum found " ; 
    else cout << "Subarray with zero sum not found " ;   
    return 0 ; 
}