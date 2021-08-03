#include<bits/stdc++.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;

int main(){
    system("color 4A");
    cout << setw(50);
    int hr,min,sec;
    cout << "Enter Current Timme " << endl ;
    cout << "HH-" ;
    cin >> hr ;
    cout << "MM-" ;
    cin>> min ;
    cout << "SS-" ;
    cin >> sec ;
    system("color 4A");
    if (hr > 23) cout << "wrong input " ;
    else if (min > 60) cout << "wrong input " ;
    else if (sec > 60) cout << "wrong input " ;
    else {
        while(true){
            system("cls");
            for( hr ; hr < 24 ;hr++ ){
                for( min ; min < 60 ; min++){
                    for( sec ; sec < 60 ; sec++ ){
                        cout << setw(50) << "Current Time  " 
                        << hr <<" : " << min << " : " << sec ;
                        Sleep(1000);
                    }
                    sec = 0;
                }
                min = 0;
            }
        }
    }
    return 0;
}