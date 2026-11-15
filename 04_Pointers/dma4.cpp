#include<iostream>
using namespace std;
class Mentors
{
    int *noofbatches;


    public:
    Mentors(int batches=0)
    {
        noofbatches= new int(batches);
    }
    void display()
    {
        cout<<"Branches: "<<*noofbatches<<endl;

    }
};
int main()
{
    Mentors m1(3),m2(4);
    m1.display();
    m2.display();
}
//issue with delete so we go for destructor.cpp