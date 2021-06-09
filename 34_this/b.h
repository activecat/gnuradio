#ifndef B_H_INCLUDED
#define B_H_INCLUDED
#include "a.h"

class B
{
    public:
        B( A &a );
        void alter1( int x );

        B( A *a);
        void alter2( int x );


    private:
        A   a;
        A *pa;
};

#endif // B_H_INCLUDED
