#include<iostream>
using namespace std;
class football
{
  string name;
  int goals;
  int jersey_no;
  public:
  football(string name="default",int goals=0,int jersey_no=0):name(name),goals(goals),jersey_no(jersey_no)
  {

  }
  void display()
  {
    cout<<"Name: "<<name<<endl
        <<"goals: "<<goals<<endl
        <<"jersey: "<<jersey_no<<endl;
  }
};
int main()
{
 football f1("Messi",934,10),f2("ronaldo",986,7);
 football f3(f1);
 football f4=f2;
 f3.display();
 f4.display();  
}