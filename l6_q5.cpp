/*Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
class. Its member data should consist of three ints: month, day, and year. It should also
have two member functions: getdate(), which allows the user to enter a date in
12/31/02 format, and showdate(), which displays the date*/
#include<iostream>
using namespace std;

class Date
{
    private:
     int day;
     int month;
     int year;

    public:
     void get_date()
     {
         char dummychar;
         cout<<"Enter the date in (DD/MM/YY) format"<<endl;
         cin>>day>>dummychar>>month>>dummychar>>year;
     } 

     void show_date()
     {
         cout<<"The date is "<<day<<"/"<<month<<"/"<<year<<endl;
     }

};
int main()
{
    Date d1;
    d1.get_date();
    d1.show_date();
    return 0;
}