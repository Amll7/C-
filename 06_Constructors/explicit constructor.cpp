#include<iostream>
using namespace std;
class Students
{
    
    int id;
    string name;
    int dob;

    public:
    
    Students()
    {
        cout<<"Enter the details of the student:ID,Name,Dob: "<<endl;
        cin>>id;
        cin>>name;
        cin>>dob;
    }
    void display()
    {
        cout<<"Id: "<<id<<endl
        <<"name: "<<name<<endl
        <<"dob: "<<dob<<endl<<endl;
    }
};
int main()
{
    struct Students s1,s2;

    s1.display();
    s2.display();
}