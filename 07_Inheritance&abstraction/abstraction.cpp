#include<iostream>
using namespace std;
class car
{
  void ac_on()
  {
   cout<<"AC ON"<<endl;
  }
  void ac_off()
  {
    cout<<"AC OFF"<<endl;
  }
  public:
  void engine_on()
  {
   cout<<"Engine ON"<<endl;
   ac_on();
  }
  void engine_off()
  {
    cout<<"Engine OFF"<<endl;
    ac_off();
  }
};

int main()
{
  car c1;
  c1.engine_on();
  c1.engine_off();

}