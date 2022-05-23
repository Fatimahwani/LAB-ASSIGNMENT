/*  Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.*/

#include<iostream>
using namespace std;
class Employee
{
    private:
     int emp_no;
     float emp_comp;

    public:
     Employee():emp_no(0),emp_comp(0)
     {}
     void get_details()
     {
         cout<<"Enter your employee no and compensation"<<endl;
         cin>>emp_no>>emp_comp;
     }

     void display()
     {
         cout<<"Employee id "<<emp_no<<endl;
         cout<<"Employee compensation "<<emp_comp<<endl;
     }

};

int main()
{
    Employee e1,e2,e3;
    
    e1.get_details(); 
    e2.get_details();
    e3.get_details();

    e1.display();
    e2.display();
    e3.display();




    return 0;
}