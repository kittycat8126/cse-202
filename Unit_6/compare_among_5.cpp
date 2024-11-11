#include<iostream>
using namespace std;
template <typename T>
class Compare
{
    T a[5];
    public:
    Compare()
    {
        cout<<"Enter the elements : \n";
        for(int i = 0;i<5;i++)
        {
            cin>>a[i];
        }
        cout<<"maximum value amaong 5 values "<<tell();
    }
    T tell()
    {
        T ans;
        for(int i = 0;i<5;i++)
        {
            if(a[i]>a[i+1])
            {
                ans = a[i];
            }
        }
        return ans;
    }

};
int main()
{
    Compare <int>c1;
    return 0;
}