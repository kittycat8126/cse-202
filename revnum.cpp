#include<iostream>
using namespace std;
void revnum(int& num)
{
    int ans = 0;
    while(num>0)
    {
        int ld = num%10;
        ans = ans*10 + ld;
        num /= 10;
    }
    num = ans;
}
int main()
{
    int n;
    cout<<"Enter the numbe : "<<endl;
    cin>>n;
    int &num = n;
    revnum(num);
    cout<<n;
    return 0;
}