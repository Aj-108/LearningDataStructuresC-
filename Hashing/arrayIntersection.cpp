#include<bits/stdc++.h>
using namespace std ;


//O(m+n)
int intersection2(int *arr1,int* arr2,int n,int m){
    unordered_set<int> s ;
    int res = 0 ;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]) ;
    }
    for(int i=0;i<m;i++){
        if(s.find(arr2[i])!= s.end()){
            res ++ ;
            s.erase(arr2[i]) ;
        }
    }
    return res ;
}

// O(m*n)
int intersection(int *arr1,int *arr2,int n,int m){
    unordered_set <int> s ;
    for(int i =0 ; i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i] == arr2[j]){
                s.insert(arr1[i]) ;
            }
        }
    }
    return s.size() ;
}

int main(){ 
    int n , m;
    cin >> n >> m;
    int *arr1 = new int [n] ;
    int *arr2 = new int [m] ;
    
    for(int i=0;i<n;i++){
        cin >> arr1[i] ;
    }
    for (int i=0;i<m;i++){
        cin >> arr2[i] ;
    }
    
    
    cout << intersection(arr1,arr2,n,m) ;
    delete [] arr1 ;
    delete [] arr2 ;
    return 0 ;
}