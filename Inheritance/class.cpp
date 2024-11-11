#include<iostream>
using namespace std;
class base
{
    int x;
    protected:
    int y;
    public:
    void show()
    {
        cout<<"Enter the value of X and Y : \n";
        cin>>x>>y;
        cout<<"Value of x is  : \n"<<x;
        cout<<"Value of Y is : \n"<<y;
    }
};
class derived : public base
{
    int z;
    public:
    void display()
    {
        show();
        cout<<"Enter the calue of Z : \n";
        cin>>z;
        cout<<"Z : \n"<<z;
        cout<<"y : \n"<<y;
    }
};
int main()
{
    derived d1;
    d1.display();
}