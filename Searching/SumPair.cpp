#include<bits/stdc++.h>
using namespace std ;

bool isPair(int arr[],int n,int x){     // Two Pointer Approach
    int left = 0 , right = n-1;
    while(left < right){
        if (arr[left]+arr[right] == x) return true ;
        if (arr[left]+arr[right] > x) right -- ;
        else left ++ ;
    }
    return false ;
}

void sumPair(int arr[],int n,int x){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]+arr[j] == x){
                cout << arr[i] << " " << arr[j] ;
                return ;
            }
        }
    }
    cout << "Nothing found " ;
    return ;        
}

int main(){
    int n;
    cin >> n;

    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;

    int x ;
    cin >> x;
    cout << isPair(arr,n,x);
    return 0;
}