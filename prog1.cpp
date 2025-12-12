#include<iostream>

using namespace std;

class Laptop
{
    string name;
    int price;
    int processor;

    public:
        Laptop(string name,int price,int processor)
        {
            cout<<"Name is : "<<name<<endl;
            cout<<"Price is : "<<price<<endl;
            cout<<"Processor is : "<<processor<<endl;
        }
};

int main()
{
    Laptop la("yatri",32000,256);

    return 0;
}