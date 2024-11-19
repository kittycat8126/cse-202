#include<iostream>
using namespace std;
void check(int x,int y)
{
    int ans = pow(2,(x+y));
    bool ren;
    try
    {
        if(ans%2!=0){
            throw(true);
        }
        else{
            cout<<"Square if sum is not odd";
        }
    }
    catch(bool x)
    {
        cout<<"Exception caught square of sum is odd";
        ren = x;
    }
}
int main()
{
    int x,y;
    cout<<"Enter the numbers : \n";
    cin>>x>>y;
    check(x,y);
    return 0;
}