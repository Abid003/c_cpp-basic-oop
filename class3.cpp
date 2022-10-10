#include<iostream>
using namespace std;
class Student
{
    int id;
    string name;
    string sec;
public:
    void get_value(int Id, string na, string Sec )
    {
        id = Id;
        name= na;
        sec= Sec;
    }
    void display()
    {
        cout<<id<<endl<<name<<endl<<sec;
    }
};
int main()
{
    Student ab1, ab2;
    ab1.get_value(101,"abid","B");
    ab1.display();


}
