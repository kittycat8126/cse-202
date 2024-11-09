#include<iostream>
using namespace std;
class Array
{
private:
    int *arr;
    int n;
public:
    Array()
    {
        cout<<"Enter the size of array : ";
        cin>>n;
        arr = new int[n];
        getdata();
    }
    void getdata()
    {
        cout << "Enter elements : \n";
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    void showData()
    {
        cout<<"\nYour array is : \n";
        for(int i = 0;i<n;i++)
        {
            cout<<" "<<arr[i];
        }
    }
};
int main()
{
    Array *ptr;
    int no_object;
    cout<<"Enter no of objects you want to make : \n";
    cin>>no_object;
    ptr = new Array[no_object];
    for(int i = 0;i<no_object;i++)
    {
        ptr->showData();
        ptr++;
    }
    delete [] ptr;
    return 0;
}