#include<bits/stdc++.h>
using namespace std;

/***
 *                              ------ Member Function -------
 *          They are also accessed in the same way as Data member ..
 *          Syntax : return type name (variables){
 *                             statements ;
 *                    }  
 * 
 * 
 *                            -------- Contructors -----------
 *          Contructors are special class members which are compile every time an object of class 
 *          is instantiated . Contrors have same name as class .
 *    
 ***/


class YouTubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel ( string name , string ownerName ){          //Constructor
        Name = name ;
        OwnerName = ownerName ;
        cout<<"Enter Sub count " ;
        cin>>SubscriberCount ;
    }

    void GetInfo(){
        // All variables are globally described ..
        cout << "Name : " << Name << endl ;
        cout << "Owner Name : " << OwnerName << endl ;
        cout << "Sub Count : " << SubscriberCount << endl ;
        cout << "Videos : " << endl ; 
        for(string VideoTitles : PublishedVideoTitles){
            cout << VideoTitles << endl ;
        }
    }
};

int main(){
    //With contructor one can make n number of variables just by simply passing values in contructors 
    //No need to write code for every input.
    //Same goes for member function for output.


    YouTubeChannel ytchannel("CodeBeauty","Saldina");
    ytchannel.PublishedVideoTitles = {"C++ for Begginers Video 1 , HTML CSS Video 1,C++ OOP Video 1"};

    YouTubeChannel ytchannel2("ABC","XYZ");

    ytchannel.GetInfo();
    ytchannel2.GetInfo();
    
    return 0;
}
