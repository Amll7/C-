#include<iostream>
using namespace std;
int add(int num1,int num2)
{
    cout<<"Function 1"<<endl;
    return num1+num2;
}
int add(int num1,int num2,int num3)
{
    cout<<"Function 2"<<endl;
    return num1+num2+num3;
}
double add(double num1,double num2)
{
    cout<<"Function 3"<<endl;
    return num1+num2;
}
int main()
{
    cout<<add(10,5,2)<<endl;
    cout<<add(10,5)<<endl;
    cout<<add(10.1,5.2,4.1)<<endl;
}