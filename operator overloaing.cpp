#include<iostream>
using namespace std;
class Op
{
    int a;
public:
    void get_a(int a1)
    {
        a= a1;
    }
    void operator ++()
    {
        a=a+10;

    }
        void operator --()
    {
        a=a-10;

    }
            void operator *()
    {
        a=a*10;

    }
            void operator -()
    {
        a=-a;

    }
    void display()
    {
        cout<<a<<endl;
    }

};
int main()
{
    Op ob,ob1,ob2,ob3;
    ob.get_a(50);
    ob1.get_a(50);
    ob2.get_a(50);
    ob3.get_a(50);
    ++ob;
     --ob1;
     -ob2;
     *ob3;
    ob.display();
    ob1.display();
    ob2.display();
    ob3.display();

}
