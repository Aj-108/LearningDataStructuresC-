#include<bits/stdc++.h>
using namespace std ;


// Recursive Code
int lcs(string str1,string str2,int n,int m){
    if(n==0 || m==0){
        return 0 ;
    }

    if(str1[n-1] == str2[m-1]){
        return 1+lcs(str1,str2,n-1,m-1) ;
    }
    else{
        return max(lcs(str1,str2,n-1,m),lcs(str1,str2,n,m-1)) ;
    }
}

// Memoization

int lcs2(string str1,string str2,int n,int m,int **arr){
    if(arr[n][m]!=-1){
        return arr[n][m] ;
    }
    if(n==0 || m== 0){
        arr[0][0] = 0 ;
        return 0 ;
    }
    if(str1[n-1] == str2[m-1]){
        arr[n][m] = 1+lcs2(str1,str2,n-1,m-1,arr) ;
    }
    else{
       arr[n][m] = max(lcs2(str1,str2,n-1,m,arr),lcs2(str1,str2,n,m-1,arr)) ; 
    }
    return arr[n][m] ;
}

// Dynamic Programming 
int lcs3(string str1,string str2){
    int m = str1.length() , n = str2.length() ;
    int dp[m+1][n+1] ;
    for(int i=0;i<=m;i++){
        dp[i][0] = 0 ;
    } 
    for(int j=0;j<=n;j++){
        dp[0][j] = 0 ;
    }
    for(int i=1;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1] ;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]) ;
            }
        }
    }
    return dp[m][n] ;
}

int main(){
    string str1 ;
    cin >> str1 ;
    string str2 ;
    cin >> str2 ;
    int n = str1.length() ;
    int m = str2.length() ;
    int **arr = new int*[n+1] ;
    for(int i=0;i<n+1;i++){
        arr[i] = new int [m+1] ;
        for(int j=0;j<m+1;j++){
            arr[i][j] = -1 ;
        } 
    }     

    cout << lcs3(str1,str2) ;
    return 0 ;
}