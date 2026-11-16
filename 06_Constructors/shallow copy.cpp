#include<iostream>
using namespace std;
class mentors
{
    int *batches;
    public:
    mentors(int batch=0)
    {
        batches=new int (batch);
    }
    void display()
    {
        cout<<"Batches: "<<*batches<<endl;
    }
    ~mentors()
    {
        delete batches;
    }
};
int main()
{
    mentors m1(5),m2(m1);
    m1.display();
    m2.display();
}