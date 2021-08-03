#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n,k,p ;
        cin >> n >> k ;
        int arr[n] ;
        for(int i=0 ; i<n ; i++) {cin >> arr[i];}
        cout << "k" << k << endl ; 
        for(int i=0 ; i<n ; i++){
            p = arr[(i+(n-k))%n];
            cout<<(i+(n-k))%n<<" ";
        }
    }
    return 0;
}