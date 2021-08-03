#include<bits/stdc++.h>
using namespace std;

/***
                            -----   CLASS    -------
    User defined data type ,which holds its own data members and data functions which can be accessed by creating an instance of that class(objects).
    C++ class is like an blueprint of the object.

    For Example: Consider the Class of Cars. There may be many cars with different names
    and brand but all of them will share some common properties like all of them will have
    4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.

    SYNTAX :

    keyword     user-defined name
    class           ClassName
    {
    Access specifier:       ( can be private ,public or protected      )
            Data members;   (  variables to be used  )
            Member Functions(  Method to access data members )
    };                      (  class name end with a semicolon )


                           ------ OBJECTS   ---------
    An object is an instance of a class.When a class is defined no memory is allocated but when it is instantiated(i.e object created) memory is allocated.

    SYNTAX :

    ClassName ObjectName;   (inside main function)



    Data members and Data functions are accessed by using dot('.') operator with the object.

***/

class YouTubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;
};

int main(){
    YouTubeChannel ytchannel;
    ytchannel.Name = "CodeBeauty";
    ytchannel.OwnerName = "Saldina";
    ytchannel.SubscriberCount = 1800;
    ytchannel.PublishedVideoTitles = {"C++ for Begginers Video 1 , HTML CSS Video 1,C++ OOP Video 1"};

    cout << "Name : " << ytchannel.Name << endl ;
    cout << "Owner Name : " << ytchannel.OwnerName << endl ;
    cout << "Sub Count : " << ytchannel.SubscriberCount << endl ;
    cout << "Videos : " << endl ; 
    for(string VideoTitles : ytchannel.PublishedVideoTitles){
        cout << VideoTitles << endl ;
    }
    return 0;
}
