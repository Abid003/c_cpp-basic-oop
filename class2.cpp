#include<iostream>
using namespace std;
class Phones
{
private:
    string name;
    string brand;
    int price;
    int ram;
    int rom;
    float display;
public:
        void_phn(string na,string bnd,int pr, int ra, int ro,float dp)
    {
        name= na;
        brand= bnd;
        price= pr;
        ram= ra;
        rom = ro;
        display= dp;
    }
    get_phn()
    {
          cin>> name>>brand>>ram>>display>>rom>>price;
        cout << name<<", "<<brand<< ", "<<ram<<", "<<display<<", "<<rom<<", "<<price;
    }
};
int main()
{
    Phones phone[2];
    int i;
    for ( i=0;i<2;i++)
    {
       phone[i].get_phn();
    }
    for ( i=0;i<2;i++)
    {
        phone[i].get_phn();
    }
}

