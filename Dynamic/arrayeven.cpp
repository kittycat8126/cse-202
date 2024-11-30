#include<iostream>
using namespace std;
int main()
{
    int* arr = NULL;
    int size;
    cout<<"Enter size : \n";
    cin>>size;
    arr= new int[size];  //arr is a pointer that stores the base address of this allocated memory

    if(arr==NULL)
    {
        cout<<"Memory can not be allocated . \n";
        EXIT_FAILURE;
    }
    cout<<"Enter elements : \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int * sqare = new int[size];
    for(int i = 0;i<size;i++)
    {
        sqare[i] = arr[i]*arr[i];
    }

    for(int i = 0;i<size;i++)
    {
        cout<<sqare[i]<<" ";
    }

    //even values
    cout<<"\nEven Values :\n";
    for(int i =0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }

    delete []arr;
    return 0;

}
