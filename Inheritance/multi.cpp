#include<iostream>
using namespace std;
class employee
{
    protected:
    string name;
    int id;
    int basic_sal;
    public:
    void input()
    {
        cout<<"Enter name of employee : \n";
        cin>>name;
        cout<<"Enter Employee id : \n";
        cin>>id;
        cout<<"Enter basic salary : \n";
        cin>>basic_sal;
    }
};

class bonus : public employee
{
    protected:
    int bo = 0;
    void applicable()
    {
        input();
        if(basic_sal>150000)
        {
            bo = 10000;
        }
    }
};

class Total_sal : public bonus
{
    public:
    void showDetail()
    {
        applicable();
        if(bo == 10000)
        {
            cout<<"Hurray you got bonus..! your salary is : \n";
            cout<< bo+basic_sal;
        }
        else
        {
            cout<<"Sorry you pissed the boss so no bonus : \n";
            cout<<basic_sal;
        }
    }
};
int main()
{
    Total_sal t1;
    t1.showDetail();
    return 0;
}