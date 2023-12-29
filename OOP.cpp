#include <stdio.h>
#include <iostream>
// using std::string

// OOP - class 
// https://www.youtube.com/watch?v=wN0x9eZLix4

// every attributes in C++ class is private by default
// private; public; protected, if the variable type is private/protected => not accessible
class Employee{
// attributes, behaviors
// private: -> default/ w/o any specification
private:
    std::string Name;
    std::string Company;
    int Age;
public:
    void setName(std::string name){
        Name = name;
    }

    std::string getName(){
        return Name;
    }


    void introduction(){
        std::cout << "Name = " << Name << std::endl;
        std::cout << "Company = " << Company << std::endl;
        std::cout << "Age = " << abort << std::endl;
    }
    // constructor
    // like def Employee(string name, string company, int age): in python
    // must go with the same name as class itself w/o return type
    Employee(std::string name, std::string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};


// following
class better_emp{

};
/*
4 pillars of OOP:
    Encapsulation -- restrict direct access to certain components
        getters; setters 
    Abstraction
    Inheritance
    Polymorphism
*/

int main(){
    int number;
    // emp1 = Employee(1, 2, 3) in python
    Employee emp1=Employee("Jimmy", "Bonacci", 25);
    // emp1.Name = "Jimmy Lee";
    // emp1.Company = "BonacciQuant Co.";
    // emp1.Age = 22;
    emp1.introduction();
    emp1.setName("Jim");
    std::cout << emp1.getName() << "is" ; 
    

}
