// WAAP with class employee and using default cons and perameterized con to enter id, salary and bonous of 2 employees,
// if the salary is more than 15000 than add 1500 bonus otherwise no bonus
#include <iostream>
using namespace std;
class employee
{
    int id;
    int sal;
    int bonus = 0;
    public:
    employee()
    {
        cout<<"Enter the id :";
        cin>>id;
        cout<<"Enter salary : ";
        cin>>sal;
        if(sal>=15000)
        {
            bonus += 1500;
        }
    }

    employee(int x,int salary)
    {
        id = x;
        if(salary>15000)
        {
            sal = salary+1500;
        }
        else
        {
            sal = salary;
        }
    }

    void display()
    {
        cout<<"Employee id : "<<id<<endl;
        cout<<"Salary"<<sal+bonus<<endl;
    }
};
int main()
{
    employee e1;
    e1.display();

    employee e2(12321,18000);
    e2.display();

    return 0;
} 