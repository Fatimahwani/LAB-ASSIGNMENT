 /*Create a class called time that has separate int member data for hours, minutes, and 
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.
A main() program should create two initialized time objects (should they be const?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third time variable. Finally it should display the value of this third variable.
Make appropriate member functions const.*/

//add const fxnality to this program as its mentioned in questiom the program works fine without it
//but its mentioned in questn so we will do it
#include<iostream>
using namespace std;

class Time
{
    private:
     int hrs;
     int min;
     int sec;

    public:

     Time():hrs(0),min(0),sec(0)
     {}

     Time(int hr,int mn,int sc):hrs(hr),min(mn),sec(sc)
     {}

     void display()
     {
         cout<<"("<<hrs<<":"<<min<<":"<<sec<<")"<<endl;
     }

     void add_time(Time,Time);
};

    void Time::add_time(Time t1,Time t2)
    {
        sec=t1.sec+t2.sec;
        while(sec>60)
        {
          sec=sec-60;
          min++;
        }

        min=min+t1.min+t2.min;
        while(min>60)
        {
            min=min-60;
            hrs++;
        }

        hrs=hrs+t1.hrs+t2.hrs;
    }
using namespace std;
int main()
{
    Time t1(4,90,80);
    Time t2(8,90,60);
    Time t3;
    t3.add_time(t1,t2);
    t3.display();
    return 0;
}