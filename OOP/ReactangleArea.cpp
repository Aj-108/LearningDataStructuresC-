#include<bits/stdc++.h>
using namespace std;

class RectangleArea{
private:
    int Length;
    int Breadth;
    int getArea(){
        return Length * Breadth;
    }
    void getLength(){
        cout << "Enter Length :" ;
        cin >> Length ; 
    }
    void getBreadth(){
        cout << "Enter Breadth :" ;
        cin >> Breadth ; 
    }
public:
    int Menu(){
        int choice= 0;
        while(true){
            cout << "What you wanna do " << endl;
            cout << "1.For entering Length " << endl;
            cout << "2.For entering Breadth " << endl;
            cout << "3.For Computing Area " << endl;
            cout << "Enter choice :"; 
            cin >> choice;
            switch(choice){
                case 1:
                    getLength();
                case 2 :
                    getBreadth();
                case 3:
                    getArea(); 
                default :
                    break;       
            }
        }    
    }
};

int main(){
    RectangleArea A1;
    A1.Menu();
    return 0;
}