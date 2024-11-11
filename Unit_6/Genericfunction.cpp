#include <iostream>
using namespace std;
template <class T>
void swap1(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x,y;
    cout<<"Enter values: \n";
    cin>>x>>y;
    swap1(x,y);
    float j ,k ;
    cout<<"Enter values: \n";
    cin>>j>>k;
    swap1(j,k);

    cout<<"After swapping : \n";
    cout<<"X = "<<x <<", y = "<<y<<endl;
    cout<<"J = "<<j<<", K = "<<k<<endl;
    return 0;

}