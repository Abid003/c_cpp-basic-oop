#include<iostream>
using namespace std;
class Problem
{
public:
    int i,x;
    void  Arraysum( int a[ ], int lenth)
    {
        int i , sum;
        for ( i= 0; i<lenth; i++)
        {
            sum = sum+a[i];
        }
        cout<<"the summation = "<<sum;
    }
    void Arraysum(int p)
    {
        int i, fact =1;
        for ( i=1; i<=p; i++)
        {
            fact = fact*i;
        }
        cout<< fact;
    }
};
int main()
{
    Problem ob;
    int a[5],i;
    cout<< "enter array element";
    for (i=0; i<5;i++)
    {
        cin>> a[5];
    }
    ob.Arraysum(a,5);

}
