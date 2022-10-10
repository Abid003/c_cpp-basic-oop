#include<iostream>
using namespace std;
class  P
{
    int a;
protected:
    int b;
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
    //int b;
public:
    int g;
    void get_f(int f1)
    {
        f=f1;
    }
      void get_b(int b1)
    {
        b1=b;
    }

    //int c;
    /*    void get_a(int a1)
    {
        a= a1;
    }*/
};
int main()
{
    C ob;
    ob.g = 1;
    ob.c= 2;
    ob.get_f(3);

}
