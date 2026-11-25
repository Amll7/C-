#include<iostream>
using namespace std;

class mentors
{
    public:
    int id;
    string name;
    int batches;
    mentors(int id=0,string name="None",int batches=0):id(id),name(name),batches(batches)
    {
        cout<<"Constructor called:"<<endl;

    }
    void display()
    {
        cout<<"Id: "<<id<<endl
        <<"name: "<<name<<endl
        <<"batch: "<<batches<<endl<<endl;
    }
    ~mentors()
    {
    cout<<"Desturctor called:"<<endl;
    }

};


int main()
{
    mentors *m1=new mentors;
    m1->display();
    free(m1);
}
