#include <iostream>
#include "b.h"

B::B( A &a )
{
    this->a = a;
}

B::B( A *a )
{
    this->pa = a;
}

void B::alter1( int x )
{
    std::cout << "It is currently " << a.get_x();
    this->a.set_x(x);
    std::cout << ", has been set to " << a.get_x() << std::endl;
}

void B::alter2( int x )
{
    this->pa->set_x(x);
}
