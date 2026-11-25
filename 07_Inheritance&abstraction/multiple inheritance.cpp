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
class mentors
{
    protected:
    int noofbatches;
    public:
    
    mentors(int noofbatches=0):noofbatches(noofbatches)
    {
        cout<<"Mentors constructor called "<<endl;
    }
    void showbatches()
    {
        cout<<"Batch: "<<noofbatches<<endl;
    }
    
};
class students:public Emertxe,public mentors
{
    protected:
    int marks;
    public:
    students(int id =1,string name="None",int dob=2,int noofbatches=1,int marks=0):Emertxe(id,name,dob),mentors(noofbatches),marks(marks)
    {
    cout<<"Students constructor called: "<<endl;
    }
    void showmarks()
    {
        cout<<"Marks: "<<marks<<endl;
    }
    
};
int main()
{
    //mentors m1(1,"Amal",2003,1);
    students s1(1,"aksh",2000,4,25);//id name dob batches marks
    s1.showprofile();
    s1.showbatches();
    s1.showmarks();
}