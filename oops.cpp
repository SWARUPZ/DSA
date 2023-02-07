#include<iostream>
using namespace std;

class Employee 
{
    // by default private members declared . if u want to make make public or protected mem. use ; public:, protected: .
    public:
    string Name;
    string Company;
    int Age;

     void IntroduceYourself()
     {
            cout << "Name - " << Name << endl;
            cout << "Company - " << Company << endl;
            cout << "Age - " << Age << endl;
     }
     Employee(string name,string company,int age) 
     {
        // here we create the object for employee
        Name = name;
        Company = company;
        Age = age;

     }
};
int main()
{
    Employee employee1 = Employee("zod zeke","Google",23);
    // employee1.Age= 24;
    // employee1.Name = "zod zeke";
    // employee1.Company = "Google";
    employee1.IntroduceYourself();

    Employee employee2 = Employee("zod zeke","Google",23);
    // employee2.Age= 25;
    // employee2.Name = "dake zeke";
    // employee2.Company = "Amazon";
    employee2.IntroduceYourself();

    // constructor doesnot have return type , has same name as class name . it must be public

    return 0;
}