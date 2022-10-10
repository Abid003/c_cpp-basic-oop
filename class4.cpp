
#include <iostream>

using namespace std;

class Cars
{

    string name;
    string brand;
    int milage;
    int price;
public:
    void set_values(string nm, string bd, int ml, int pr)
    {
        name = nm;
        brand = bd;
        milage = ml;
        price = pr;
    }

    void get_values()
    {
        cout<<name<<" "<<brand<<" "<<milage<<" "<<price<<endl;
    }
};

int main()
{
    Cars car[3];

    car[0].set_values("RX7","Mazda",30,35000);
    car[1].set_values("RX5","Mazda",40,30000);
    car[2].set_values("Bugardi","BMW",25,90000);

    for(int i=0; i<3; i++)
    {
        car[i].get_values();
    }
}
