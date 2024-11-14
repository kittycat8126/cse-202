#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Eneter the values of a and b : \n";
    cin>>a>>b;
    int x = a-b;
    try
    {
        if(x!=0)
        {
            cout<<"Result : "<<a/x;
        }
        else{
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Exception occured (Divide by Zero)\n";
        cout<<"Value of x : "<<x;
    }
    return 0;
}