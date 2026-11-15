#include<iostream>
using namespace std;
class Students
{
    
    int id;
    string name;
    int dob;

    public:
   
    Students(int userid=0,string username="Default",int userdob=2000)
    {
        cout<<"Parameterized constructor called: "<<endl;
            id=userid;
            name=username;
            dob=userdob;
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