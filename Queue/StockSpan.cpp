#include<bits/stdc++.h>
using namespace std ;

int  main(){
    int n ;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int span [n] ;
    stack <int> s1 ;
    
    s1.push(0);
    span[0] = 1;

    for (int i=1 ;i<n;i++){
        while(true){
            if(s1.empty()== true){
                s1.push(i);
                span[i] = i+1 ;
                break ;
            }
            if(arr[i]<=arr[s1.top()]){                
                span[i] = i-s1.top() ;
                s1.push(i);
                break ;
            }
            else{
                s1.pop();
            }
        }
    }

    for(int i=0 ; i<n ;i++){
        cout << span[i] <<" " ;
    }
    return 0 ;
}