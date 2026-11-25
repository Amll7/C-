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
     numbers operator+(numbers second)
    {
        numbers temp;
        temp.num1=num1+second.num1;
        temp.num2=num2+second.num2;
        return temp;
    }

};
int main()
{
    numbers obj(10,2),obj1(10,2),obj2#include<iostream>
using namespace std;
class emertxe
{
    int id;
    string name;
    int dob;
    public:
    emertxe(int id=0,string name="None",ind dob=0)id(id),name(name),dob(dob)
    {
        cout<<"constructor called"<<endl;
    }
    class students:public Emertxe
    {
        protected:
        int marks;
        public:
         students(int id=0,string name="None",ind dob=0):emertxe(id,name,dob),marks(marks)
         {
            cout<<"constructor s called"<<endl;
         }
    }
    void showmarks()
    {
      cout<<"Marks :"<<marks<<endl;
    }
};
int main()
{

}(20,3);
    cout<<"before the operation: "<<endl;
    obj.display();
    numbers obj3=obj+obj1+obj2;
    cout<<"after the operation: "<<endl;
    obj3.display();
}