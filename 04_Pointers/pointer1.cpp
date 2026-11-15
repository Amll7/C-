#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int *ptr=&num;
    cout<<"Before: "<<*ptr<<endl;
    *ptr=20;
    cout<<"After: "<<*ptr;
}
//without using num we use pointer 
//but it also create 8 bytes so we use a nickname so we use reference variable