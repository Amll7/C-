#include<iostream>
using namespace std;

class mentors
{
    public:
    int id;
    string name;
    int batches;
    static int num1;

};
class students
{
    public:
    static int num1;
};

int mentors::num1=0;
int students::num1=0;
int main()
{
    cout<<"Size of students: "<<sizeof(mentors)<<endl;
    mentors m1,m2;
    students s1;
    s1.num1=3;
    cout<<"Num is :"<<s1.num1<<endl;
    cout<<"Num is :"<<m1.num1<<endl;
    cout<<"Num is :"<<m2.num1<<endl;
}