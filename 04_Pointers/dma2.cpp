#include<iostream>
#include<cstdlib>
using namespace std;
#if 0
int main()
{
    int *ptr=(int*)malloc(4);
    *ptr=10;
    cout<<"*ptr : "<<*ptr<<endl;
    free(ptr);
}
#endif//disabled the set of code
int main()
{
    int *ptr= new int(10);
    cout<<"*ptr : "<<*ptr<<endl;
    delete(ptr);
}