#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int& ref=num;
    cout<<"Before: "<<num<<endl;
    ref=20;
    cout<<"After: "<<num<<endl;
    cout<<"Adress of ref: "<<&ref<<endl;
    cout<<"Adress of num: "<<&num<<endl;//have same adress
}
//without using num we use pointer 
//but it also create 8 bytes so we use a nickname so we use reference variable.