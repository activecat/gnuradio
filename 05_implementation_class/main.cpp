#include <iostream>
#include "A_impl.h"

using namespace std;

A::sptr  A::make()
{
    A::sptr temp( new A_impl() );
    return  temp;
}


A_impl::A_impl()
 { }

A_impl::~A_impl()
 { }


int main()
{
    A::make();
    return 0;
}
