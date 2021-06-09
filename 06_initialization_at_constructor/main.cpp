#include <iostream>
using namespace std;


class A
{
  public:
    A();
    void getID() { cout << " ID is " << this->ID << endl; }

  private:
    int ID;
};

A::A(): ID(213)    // member initializer list
{
  cout << "Constructor of A" << endl;
}


int main()
{
    A a;
    a.getID();
    return 0;
}
