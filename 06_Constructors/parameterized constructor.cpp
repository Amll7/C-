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
    Students(int userid,string username,int userdob)
    {
        cout<<"Parameterized constructor called: "<<endl;
            id=userid;
            name=username;
            dob=userdob;
    }
    Students(int userid,string username)
    {
        cout<<"Parameterized constructor called: "<<endl;
            id=userid;
            name=username;
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
    struct Students s1,s2(200,"Amal",2002),s3(300,"akshay");

    s1.display();
    s2.display();
    s3.display();
}