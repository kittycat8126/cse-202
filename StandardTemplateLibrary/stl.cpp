//vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1(10);
    cout<<"Size of v1 : "<<v1.size();
    for(int i = 0 ;i<v1.size();i++)
    {
        v1[i] = i;
    }

    //pushing some elements
    for(int i=10;i<=19;i++){
        v1.push_back(i);
    }


    //size
    cout<<"\nSize is : "<<v1.size()<<"\n";

    cout<<"Vector is : \n";
    for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    v1.pop_back();
    v1.pop_back();
    cout<<"\nNew Size : "<<v1.size();

    //use iterator to access the values:
    vector<int>::iterator v = v1.begin();
    while (v != v1.end())
    {
        cout<<"\n value of v = "<<*v;
        v++;
    }
    
    return 0;
}