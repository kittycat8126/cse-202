#include<iostream>
using namespace std;
class Student
{
    string name;
    int roll_no;
    int percentage;

    public:
    void set_data()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"\n Enter roll no : ";
        cin>>roll_no;
        cout<<"\nEnter percentage : ";
        cin>>percentage;
    }

    void show_data()
    {
        cout<<"name : "<<name;
        cout<<"\nroll no : "<<roll_no;
        cout<<"percentage : "<<percentage;
    }
};
int main()
{
    Student* s1 = new Student;
    s1->set_data();
    s1->show_data();
    delete s1;

}