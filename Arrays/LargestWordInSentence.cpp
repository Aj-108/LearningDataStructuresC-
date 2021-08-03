#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int MaxLength = INT_MIN ;
    int ctr = 0;
    int i=0;
    int st=0,maxst=0;
    while(true){
        if (arr[i]==' ' || arr[i]=='\0'){
            MaxLength =  max(MaxLength,ctr);
            if(MaxLength == ctr) maxst = st ;
            ctr = 0;  
            st=i+1;
        }
        else    ctr++;
        if(arr[i] == '\0') break ;
        i++; 
    }
    cout << MaxLength <<endl;
    for(int i=0;i<=MaxLength;i++)    cout << arr[i+maxst] ;
    return 0;
}