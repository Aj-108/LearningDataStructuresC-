#include<bits/stdc++.h>
using namespace std;

/***
 *                                            --------- Encapuslation ----------
 *          Encapsulation is defined as wrapping up of data under a single unit .
 *          It means to bind together the data and function that manipulates them.
 * 
 *                                            --- Example --
 *          Consider a real life example of encapsulation, in a company there are different
 *          sections like the accounts section, finance section, sales section etc. The finance
 *          section handles all the financial transactions and keep records of all the data related
 *          to finance. Similarly the sales section handles all the sales related activities and keep
 *          records of all the sales. Now there may arise a situation when for some reason an official
 *          from finance section needs all the data about sales in a particular month. In this case, he
 *          is not allowed to directly access the data of sales section. He will first have to contact some
 *          other officer in the sales section and then request him to give the particular data. This is what 
 *          encapsulation is. Here the data of sales section and the employees that can manipulate them are wrapped 
 *          under a single name “sales section”.      
 *  
 * 
 *          Encapsulated items can be accessed using getters and setters.
 *          They can also be use to apply certain conditions to them.
***/


class Employee{
private:
    string Name;
    string Company;
    int Age;

public: 
    void setName(string name){
        Name = name ;
    }
    void setCompany(string company){
        Company = company ;
    }
    void setAge(int age){
        if(age >= 18)                   //Condition applied
            Age = age ;
    }
    string getName(){
        return Name;
    }
    string getCompany(){
        return Company;
    }
    int getAge(){
        return Age;
    }
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

    employee1.setName("Abc");
    employee1.setAge(15);

    cout << "Name is changed" << employee1.getName() << endl ;
    cout << "Age is unchanged" << employee1.getAge() << endl ;

    return 0;
}