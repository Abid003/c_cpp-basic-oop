#include<iostream>
using namespace std;
class A
{
    int a1=10;
    float a=15.5;
    float b=5.5;
    float c;
public:
    A(int x, float y)
    {
        a1=x;
        a=y;
        c=a1+a;
        cout<<c;
    }
    A:: A(float x, float y)
    {
        a=x;
        b=y;
        c=a+b;
    }
   void display()
   {
       cout<<c;
   }
};
int main()
{
   A ob;
    ob.display();


}
