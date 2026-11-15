#include<iostream>
using namespace std;
class Students
{
    
    int id;
    string name;
    int dob;

    public:
    //same name with this pointer
    Students(int id=0,string name="Default",int dob=2000)
    {
        cout<<"Parameterized constructor called: "<<endl;
            this->id=id;
            this->name=name;
            this->dob=dob;
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