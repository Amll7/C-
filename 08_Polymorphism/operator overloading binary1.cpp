#include<iostream>
using namespace std;
class numbers
{
    int num1,num2;

    public:
    numbers(int num1=0,int num2=0):num1(num1),num2(num2)
    {

    }
    void display()
    {
        cout<<"Num1: "<<num1<<endl;
        cout<<"Num2: "<<num2<<endl;
    }
    void operator*(int second)
    {
        num1=num1*second;
        num2=num2*second;
    }

};
int main()
{
    numbers obj(10,2);
    cout<<"before the operation: "<<endl;
    obj.display();
    obj*10;
    cout<<"after the operation: "<<endl;
    obj.display();
}