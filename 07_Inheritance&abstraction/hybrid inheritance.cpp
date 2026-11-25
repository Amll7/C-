#include<stdio.h>
using namespace std;
class A
{
    public:
    int id;

};
class B:public A
{

};
class C:public A
{

};
class D:public C
{

};
int main()
{
    D obj;
    obj.B::id=10;
    obj.C::id=10;
    cout<<"B id"<<obj.B::id<<endl;
    cout<<"C id"<<obj.C::id<<endl;
}