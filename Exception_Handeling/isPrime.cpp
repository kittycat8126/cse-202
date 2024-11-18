#include<iostream>
using namespace std;
bool isPrime(int data)
{
    if(data<=0){
        cout<<"Enter an positive Integer ";
        return false;
    }
    if(data==1|| data==2){
        return true;
    }
    for(int i = 2;i<data;i++)
    {
        if(data%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool x = isPrime(n);
    try
    {
        if(x==true){
            throw x;
        }
    }
    catch(bool x)
    {
        if(x==true){
            cout<<"Prime Input Caused an Exception.";
        }
    }
    return 0;
    
}