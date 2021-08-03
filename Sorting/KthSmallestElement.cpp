#include<bits/stdc++.h>
using namespace std ;

int Ksmall(int arr[],int n,int k){
    int Min = INT_MAX ;
    vector<int> temp(n,-1) ;
    int ctr = 0;
    while(ctr < k){
        for(int i=0;i<n;i++){
            int x=0;
            int Temp_Min = min(arr[i],Min) ;
            for(int j=0;j<ctr;j++){
                if (Temp_Min == temp[j]){
                    x= - 1;
                }
            }
            if (x==0) Min = Temp_Min ;
        }
        temp.push_back(Min) ;
    }
}

int main(){
    int n,k  ;
    cin >> n >> k ;

    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i] ;

    // int k ;
    // cin >> k ;

    cout << Ksmall(arr,n,k) ;
    return 0 ;
}