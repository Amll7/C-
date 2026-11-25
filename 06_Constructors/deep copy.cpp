#include<iostream>
using namespace std;
class deepcopy

{
    int *batches;
    public:
    deepcopy(int batch=0)
    {
        batches=new int (batch);
    }
    deepcopy(const deepcopy &ref)
    {
        batches=new int(*ref.batches);
    }
    void display()
    {
        cout<<"Batches: "<<*batches<<endl;
    }
    ~deepcopy
    ()
    {
        cout<<"destructor called: "<<endl;
        delete batches;
    }
};
int main()
{
    deepcopy m1(5),m2(m1);
    m1.display();
    m2.display();
}