#include<iostream>
using namespace std;
class Student
{

    int id;
    string na;
    public:
    void get_values(int ID,  string name)
    {
    ID= id;
    name = na;
    }
    void display()
    {

 for (int i=0; i<2; i++){
            cout<<id<<endl;
            cout <<na<<endl;
    }
    }
};
int main()
{
    int a[2], i;
    string b;
    Student a1,a2;
    for (i=0; i<2; i++){
        cin>>a1.Student;
      }
    for (i=0; i<2; i++){
       cout<<a[i].Student;
    }
}
