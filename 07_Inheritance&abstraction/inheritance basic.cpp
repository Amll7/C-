#include<iostream>
using namespace std;
class Emertxe
{
    protected:
    int id;
    string name;
    int dob;
    public:
    Emertxe()
    {
        cout<<"Enter the details of the student: "<<endl;
        cin>>id>>name>>dob; 
    }
    void showprofile()
    {
        cout<<"Id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"dob :"<<dob<<endl;
    }
    ~Emertxe()
    {
        cout<<"Destructor called"<<endl;
    }
};
class mentors : public Emertxe
{
    protected:
    int noofbatches;
    public:
    mentors()
    {
        cout<<"Enter the no of batches: "<<endl;
        cin>>noofbatches;
    }
    ~mentors()
    {
        cout<<"Destructor called"<<endl;
    }
};
class students:public Emertxe
{
    protected:
    int marks;
    public:
    students()
    {
    cout<<"Enter the no of batches: "<<endl;
    cin>>marks;
    }
    ~students()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    mentors m1;
    students s1;
    m1.showprofile();
    s1.showprofile();
}