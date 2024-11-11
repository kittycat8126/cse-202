#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ofstream of("result");
    of<<"Yo yo honey singh";
    of.close();
    cout<<"data saved\n";
    ifstream inf("result");
    inf>>s;
    cout<<s;
    inf.close();
    return 0;
}