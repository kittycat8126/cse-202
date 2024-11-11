#include<iostream>
#include<string>
using namespace std;
class laptop
{
    string Name;
    int cost;
    int ram;
    int Size;
    public:
    laptop()
    {
        Name = "Macbook";
        cost = 199990;
        ram = 18;
        Size = 14;
    }
    laptop(string name,int cost,int ram,int size)
    {
        Name = name;
        this->cost = cost;
        this->ram = ram;
        this->Size = size;
    }
    laptop(laptop &l1)
    {
        Name = l1.Name;
        cost = l1.cost;
        ram = l1.ram;
        Size = l1.Size;
    }
    void show()
    {
        cout<<"Laptop name : "<<Name<<endl;
        cout<<"Laptop cost : "<<cost<<endl;
        cout<<"Ram capacity : "<<ram<<endl;
        cout<<"Display size : "<<Size<<endl;
        cout<<"**********######************"<<endl;
    }
    ~laptop()
    {
        Name = "";
        cost;
        Size;
        ram;
    }
};
int main()
{
    laptop l3;
    laptop l1("Lenovo",100000,32,14);
    laptop l2(laptop &l1);
    l3.show();
    l1.show();

    return 0;
}