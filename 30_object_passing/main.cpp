#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

void local_alter( A &a, int x )
{
    a.set_x(x);
}


int main()
{
    A a1(11);
    cout << "(1).  x is " << a1.get_x() << "  (should get 11)" << endl;

    a1.set_x(22);
    cout << "(2).  x is " << a1.get_x() << "  (should get 22)" << endl;


    B b1(a1);
    b1.alter1(33);
    cout << "(3).  x is " << a1.get_x() << "  (should get 33) ***" << endl;

    local_alter(a1,44);
    cout << "(4).  x is " << a1.get_x() << "  (should get 44)" << endl;


    A *a2;
    a2 = new A(55);
    cout << "(5).  x is " << a2->get_x() <<  "  (should get 55)" << endl;

    B b2(a2);
    b2.alter2(66);
    cout << "(6).  x is " << a2->get_x() << "  (should get 66)" << endl;

    return 0;
}
