#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int *ptr=(int*)malloc(4);
    *ptr=10;
    cout<<"*ptr : "<<*ptr<<endl;
    free(ptr);
}