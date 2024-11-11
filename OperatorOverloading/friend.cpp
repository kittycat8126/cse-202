#include <iostream>
using namespace std;
class fxn
{
    public:
    int x,y;
    public:
    fxn()
    {
        x = 0;
        y = 0;
    }
    fxn(int n1,int n2)
    {
        x = n1;
        y = n2;
    }

    friend fxn operator*(fxn n1,fxn n2);
    friend fxn operator/(fxn n1, fxn n2);
};
fxn operator*(fxn n1, fxn n2)
{
    fxn temp;
    temp.x = n1.x*n2.x;
    temp.y = n1.y*n2.y;
    return temp;
}

fxn operator/(fxn n1, fxn n2)
{
    fxn temp;
    temp.x = n1.x/n2.x;
    temp.y = n2.x/n2.y;
    return temp;
}


int main()
{
    fxn obj1(12,5), obj2(16,4);
    fxn ans1 = operator*(obj1,obj2);
    cout<<"Multiplication of obj1 and obj2 is :\n"<<ans1.x<<","<<ans1.y<<endl;
    fxn ans2 = operator/(obj1,obj2);
    cout<<"Dvision of obj1 and obj2 is :\n"<<ans2.x<<","<<ans2.y<<endl;
    return 0;
}