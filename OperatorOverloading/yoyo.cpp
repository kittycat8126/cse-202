#include<iostream>
using namespace std;
class km
{
    int kim;
    public:
    km(int m)
    {
        kim = m/1000;
    }
    void show()
    {
        cout<<kim;
    }
};
int main()
{
    int n;
    cout<<"Enter the distance in meters :\n";
    cin>>n;
    km k1(n);
    k1.show();
    return 0;
}