//q1 
#include<iostream>
using namespace std;
class Int
{
    private:
     int variable;
    
    public:
     Int():variable(0)//constructor with no arg to initiaize with zero
     {}

     Int(int var):variable(var)//const with 1 arg to initialize with my own choice
     {}

     void display()
     {
         cout<<variable;
     }
     void add_int(Int,Int);//declaring inside the class but definition is outside

};

void Int::add_int(Int i1,Int i2)//definition of fxn
{
    variable=i1.variable+i2.variable;

}


int main()
{
    Int i1(-6),i2(5),i3;
    i3.add_int(i1,i2);//i3 object stores the added value
    i3.display();



    
    return 0;
}


