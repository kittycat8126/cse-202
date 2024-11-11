#include<iostream>
using namespace std;
class base
{
    protected:
    int x;
    void show()
    {
        x = 5;
        cout<<"First value is :"<<x;
    }
};
class derived : public base
{
    int y;
    public:
    void sum()
    {
        cout<<"\n sum is  : "<<x+y;
    }
};
int main()
{
    derived d1;
    d1.sum();
    return 0;
} 