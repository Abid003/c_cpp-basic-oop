#include<iostream>
using namespace std;
class A
{
public:
    void a()
    {
        cout<<" before over ride";
    }
};
    class B: public A
    {
    public:
        void a()
        {
            cout<<"over ride done";
        }
    };
    int main()
    {
        B ob;
        ob.a();
    }
