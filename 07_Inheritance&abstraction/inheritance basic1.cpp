#include<iostream>
using namespace std;
class Emertxe
{
    protected:
    int id;
    string name;
    int dob;
    public:
    Emertxe(int id=0,string name="Default",int dob=0):id(id),name(name),dob(dob)
    {
        cout<<"emertxe constructor called:"<<endl;
        
    }
    void showprofile()
    {
        cout<<"Id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"dob :"<<dob<<endl;
    }
};
class mentors : public Emertxe
{
    protected:
    int noofbatches;
    public:
    
    mentors(int id =1,string name="None",int dob=2,int noofbatches=0):Emertxe(id,name,dob),noofbatches(noofbatches)
    {
        cout<<"Mentors constructor called "<<endl;
       // cin>>noofbatches;
    }
    void showbatches()
    {
        cout<<"Batches: "<<noofbatches<<endl;
    }
    
};
class students:public Emertxe
{
    protected:
    int marks;
    public:
    students(int id =1,string name="None",int dob=2,int marks=0):Emertxe(id,name,dob),marks(marks)
    {
    cout<<"Students constructor called: "<<endl;
    //cin>>marks;
    }
    void showmarks()
    {
        cout<<"Marks: "<<marks<<endl;
    }
    
};
int main()
{
    mentors m1(1,"Amal",2003,1);
    students s1(2,"aksh",2000,25);
    m1.showprofile();
    m1.showbatches();
    
    s1.showprofile();
    s1.showmarks();
}