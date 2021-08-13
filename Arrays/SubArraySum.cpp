#include<bits/stdc++.h>
using namespace std ;

int main(){
    int SubArraySum ,n ;
    cin>> n >> SubArraySum;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    int sum =0 ;
    int startIndex = -1 ,endIndex = -1 ;
    for(int i=0 ;i<n;i++){
        for(int j=i;j<n;j++){
            sum += arr[j] ;
            if(sum == SubArraySum) {
                startIndex = i+1 ;
                endIndex = j+1 ;
                break;
            }
            if(sum > SubArraySum ) break ;
        }
        if (sum == SubArraySum) break ;
        sum = 0 ;
    }

    if (startIndex == -1 ) cout << "SubArray not found\n" ;
    else {
        cout << "StartIndex = " << startIndex ;
        cout <<"\nendIndex = " << endIndex ;
    }

    return 0 ;
}