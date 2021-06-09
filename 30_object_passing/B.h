#ifndef B_H_INCLUDED
#define B_H_INCLUDED

#include "A.h"

class B
{
    public:
        B( A &a )
         { this->a = a; }

        B( A *a )
         { this->pa = a; }

        void alter1( int x )
         { this->a.set_x(x); }

        void alter2( int x )
         { this->pa->set_x(x); }

    private:
        A a;
        A *pa;

};

#endif // B_H_INCLUDED
