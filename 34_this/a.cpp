#include <iostream>
#include "a.h"
#include "b.h"

A::A()
{
    this->x = 100;
}


int A::get_x()
{
    return this->x;
}


void A::set_x( int x )
{
    this->x = x;
}


void A::special1( int x )
{
    B b( *this );     // pass the object
    b.alter1(x);
}

void A::special2( int x )
{
    B b2( this );    // pass the pointer
    b2.alter2(x);
}
