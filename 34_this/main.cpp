#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;



int main()
{
    A a;
    cout << "Step 1:  a.x is " << a.get_x() << endl;

    a.set_x(101);
    cout << "Step 2:  a.x is " << a.get_x() << endl;

    a.special1(201);
    cout << "Step 3:  a.x is " << a.get_x() << endl;

    a.special2(301);
    cout << "Step 4:  a.x is " << a.get_x() << endl;

    return 0;
}
