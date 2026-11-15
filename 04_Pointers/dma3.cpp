#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int *ptr= new int[5]{10,20,30};
    for(int i=0;i<5;i++)
    {
    cout<<"*ptr : "<<*(ptr+i)<<endl;
    }
    delete(ptr);
}