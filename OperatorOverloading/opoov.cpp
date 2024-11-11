#include <iostream>
using namespace std;
class Sum
{
    public:
    int x,y;
    Sum()
    {
        y = 50;
    }
    void setData()
    {
        cout<<"Enter x : ";
        cin>>x;
    }
    int operator+(Sum s1)
    {
        return (x+s1.y);
    }
    
    friend void operator--(Sum);

};

void operator--(Sum s2)
{
    cout<<--s2.x;
};
int main()
{
    Sum s1,t;
    s1.setData();
    int d = s1+t;
    cout<<d<<endl;
    Sum s2;
    
    

}