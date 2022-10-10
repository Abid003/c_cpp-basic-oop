#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char s;
    cout<< "enter two number an a sign; ";
    cin>>a,b,s;

    if(s=='+')
    {
       c= a+b;
        cout<<c;
    }
     else if(s=='-')
    {
        c=a-b;
        cout<<c;
    }
      else if(s=='*')
    {
        c=a*b;
        cout<<c;
    }
     else  if(s=='/')
    {
        cout<<a/b;
    }
}
