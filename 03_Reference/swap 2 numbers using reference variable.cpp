#include<iostream>
using namespace std;
void swap(int& ref,int& ref1)
{
    int temp=ref;
    ref=ref1;
    ref1=temp;
}
int main()
{
    int num=10;
    int num1=20;
    int& ref=num;
    int& ref1=num1;
    cout<<"Before swaping: "<<endl;
    cout<<"Num 1 is "<<num<<endl
        <<"Num 2 is "<<num1<<endl;
    swap(ref,ref1);
    cout<<"After swaping: "<<endl;
    cout<<"Num 1 is "<<num<<endl
        <<"Num 2 is "<<num1<<endl;
}