//not complete problem in tsking as input esc key etc warna baki logic clear hai
#include<iostream>
using namespace std;
class toll_booth
{
    private:
     unsigned int num;
     double money;
    
    public:

     toll_booth():num(0),money(0.0)
     {}

     void paying_car()
     {
        num++;
        money=money+0.50;
     }

     void no_pay_car()
     {
         num++;

     }
     void display()
     {
         cout<<"No of cars gone by : "<<num<<endl;
         cout<<"Total money : "<<money<<endl;
     }

};

int main()
{
    toll_booth t1;
    char conti='a';
    char choice;

    while(conti!='\"')
    {
        cin>>choice;

    
    if(choice=='\b')//paying car
    {
        t1.paying_car();

    }
    else if(choice=='\\')//cars that didnt pay
    {
        t1.no_pay_car();
    }

    t1.display();
    cout<<"press esc to exit and enter to continue"<<endl;
    cin>>conti;
    }
    return 0;
}