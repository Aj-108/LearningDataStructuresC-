#include<bits/stdc++.h>
using namespace std;

class Employee{
public: 
    string Name;
    string Company;
    int Age;

    Employee(string name , string company,int age){
        Name = name ;
        Company = company ;
        Age = age;
    }

    void IntroduceYourself(){
        cout << "Name : " << Name << endl;
        cout << "Company :" << Company << endl ;
        cout << "Age :" << Age <<endl;
    }
};

int main(){
    Employee employee1 ("Saldina ","YT CodeBeauty",25);
    Employee employee2 (" Archit ","Student ",18);

    employee1.IntroduceYourself();
    employee2.IntroduceYourself();
    return 0;
}