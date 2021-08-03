#include<bits/stdc++.h>
using namespace std;

/***
 *                                            --------- Inheritance ----------
 *          Capability of a class to derive porperties and characteristics from other class is called Inheritance.
 *          Sub Class: The class that inherits properties from another class is called Sub class or Derived Class. 
 *          Super Class:The class whose properties are inherited by sub class is called Base Class or Super class.
 * 
 *          Syntax:
 *              class Sub class : access mode base class{
 *                  //Body of class
 *              }  
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

class Developer :public Employee {          //Inherited from class employee ....employee is a parent class and 
                                            //Developer is a child class
                                            //Inheritance has been made public so that its functions can be accessed in main
                                            //By default it is always private 
public:
    string FavProgrammingLanguage;

    Developer ( string name , string company , int age , string favProgrammingLanguage)
    : Employee(name ,company , age)             //Employee contructor got inherited in Developer
    {
        FavProgrammingLanguage = favProgrammingLanguage ;
    } 

    void FixBug(){
        cout<< getName() << " fixed bug  using " << FavProgrammingLanguage << endl ;  // Name cannot be directly accessed as it is a private data member (Encapsulation)  
    }                               // If i use protected then it can be directly accessed in derived class .. 

};

class Teacher : public Employee {
public:
    string Subject;

    Teacher (string name , string company , int age , string subject)
    :Employee (name ,company , age)
    {
        Subject = subject ;       
    }

    void PrepareLesson(){
        cout<< getName() << "is teaching " << Subject << endl ;
    }
};

int main(){
    Employee employee1 ("Saldina ","YT CodeBeauty",25);
    Employee employee2 (" Archit ","Student ",18);

    Developer d("Saldina ","YT CodeBeauty",25,"C++");
    d.FixBug();
    d.IntroduceYourself();

    Teacher t1(" Archit ","Student ",18,"computer");
    t1.PrepareLesson();

    return 0;
}