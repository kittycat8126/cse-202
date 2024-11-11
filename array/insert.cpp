#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the size of array : \n";
    cin>>n;
    int arr[100];
    cout<<"Enter elements : \n";
    for(int i = 0 ;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the position you want to insert:";
    int pos;
    cin>>pos;
    int val;
    cout<<"enter the value :";
    cin>>val;
    cout<<"Array before insertion :\n";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    //inserting
    for(int i = n-1;i>=pos-1;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = val;

    cout<<"\nArray after insertion  : \n";
    n -=-1;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}