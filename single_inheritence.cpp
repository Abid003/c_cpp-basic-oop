#include<iostream>
using namespace std;
class P
{
    int a;
protected:
    int b ;
public:
    int c;
    void get_a(int a1)
    {
        a= a1;
    }
};
class C : public P
{
    int e;
protected:
    int f;
    //int b ;
public:
    int g;
        void get_b(int b1)
    {
        b= b1;
    }
         void get_e(int e1)
    {
        e= e1;
    }
         void get_f(int f1)
    {
        f= f1;
    }
        //int c ;
    /*   void get_a(int a1)
    {
        a= a1;
    }
    */
    void display()
    {
        cout<<g<<endl;
        cout<<c<<endl;
        cout<<b<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
    }
};
int main()
{
    C ob;
    ob.g = 10;
    ob.c =11;
    ob.get_a(1);
    ob.get_b(3);
    ob.get_e(2);
    ob.get_f(4);

}
