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

    cout<<"Enter the position from where you want to delete\n";
    int pos;
    cin>>pos;
    cout<<"Array before deletion\n";
    for(int i = 0 ;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray after deletion : ";
    for(int i = pos-1;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i =0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}