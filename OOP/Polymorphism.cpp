#include<bits/stdc++.h>
using namespace std;

/***
 *                                            --------- Polymorphism ----------
 *          The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability
 *          of a message to be displayed in more than one form. 
 * 
 *          A real-life example of polymorphism, a person at the same time can have different characteristics. Like a man
 *          at the same time is a father, a husband, an employee. So the same person posses different behavior in different 
 *          situations. This is called polymorphism. Polymorphism is considered as one of the important features of 
 *          Object Oriented Programming.
 * 
 * 
 *                                          ---------Virtual Function -----------
 * 
 *          A virtual function is a member function in the base class that we expect to redefine in derived classes.
            Basically, a virtual function is used in the base class in order to ensure that the function is overridden.
            This especially applies to cases where a pointer of base class points to an object of a derived class.
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
        if(age >= 18)                  
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
    virtual void Work(){                    // New funtion Work... works differently in every function if I overwrite this one 
                                    //with a new one as same name
        cout << Name << "Hey lets do some work " << endl ;
    }
};

class Developer :public Employee {          
public:
    string FavProgrammingLanguage;

    Developer ( string name , string company , int age , string favProgrammingLanguage)
    : Employee(name ,company , age)           
    {
        FavProgrammingLanguage = favProgrammingLanguage ;
    } 
    void FixBug(){
        cout<< getName() << " fixed bug  using " << FavProgrammingLanguage << endl ;    
    }                               
    void Work(){
        cout << getName() << "is working in " << FavProgrammingLanguage << endl ;
    }
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
        cout<< getName() << "is preparing " << Subject << endl ;
    }
    void Work(){
        cout<< getName() << "is teaching " << Subject << endl ;
    }
};

int main(){
    Employee employee1 ("Saldina ","YT CodeBeauty",25);
    Employee employee2 (" Archit ","Student ",18);
    Developer d("Saldina ","YT CodeBeauty",25,"C++");
    Teacher t1(" Archit ","Student ",18,"computer");
    
    employee1.Work();
    d.Work();
    t1.Work();
    //using pointers
    Employee* e1 = &d;
    Employee* e2 = &t1;

    e1->Work();
    e2->Work();

    return 0;
}