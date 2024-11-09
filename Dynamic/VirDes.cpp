#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"constructing base";
    }
    //If we dont make this des virtual only base class destructor will be called while delting the object of derived class 
    ~base()
    {
        cout<<"Destructing base";
    }
    
    //But if we make this destructor virtual than both destructors will be called
    virtual ~base()
    {
        cout<<"Destructing base";
    }
};

class derived : public base
{
    public:
    derived()
    {
        cout<<"Creating derived";
    }
    ~derived()
    {
        cout<<"Destructing derived";
    }
};
int main()
{

    /*
    The Most important thing for VIRTUAL destructor is that your pointer must be base class type and object of derived class
    */
    base *ptr = new derived;
    delete ptr;
    return 0;
}