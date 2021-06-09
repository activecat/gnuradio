#include <iostream>
#include <vector>
using namespace std;

#define SIZE 3

typedef std::vector <int>           gr_vector_int;
typedef std::vector <float>         gr_vector_float;
typedef std::vector <const void *>  gr_vector_void_star;

int main()
{
    gr_vector_int       xx;
    gr_vector_float     yy;
    gr_vector_void_star zz;

    float *temp;

    for (int i=0; i < SIZE; i++)
     {
        xx.push_back( 100 + i );
        yy.push_back( (float)1/(i+11) );

        temp = new float;
        *temp = 200.5 + i;
        zz.push_back( temp );
     }

    cout << "The size of xx is " << xx.size() << ", size of yy is " << yy.size() << ", size of zz is " << zz.size() << endl << endl;


    for (int i=0; i < SIZE; i++)
     {
        temp = (float*) zz[i];
        cout << "xx[" << i << "] is " << xx[i] << ",   yy[" << i << "] is " << yy[i] << ", zz[" << i << "] is " << *temp << endl;
     }
    cout << endl;


    for ( gr_vector_int::iterator   i=xx.begin(); i!=xx.end(); i++ )    cout << "The value of xx is " << *i << endl;
    for ( gr_vector_float::iterator i=yy.begin(); i!=yy.end(); i++ )    cout << "The value of yy is " << *i << endl;
    for ( gr_vector_void_star::iterator i=zz.begin(); i!=zz.end(); i++)
     {
        temp = (float*) *i;
        cout << "The value of zz is " << *temp << endl;
     }

    // Change the value of zz
    for ( gr_vector_void_star::iterator i=zz.begin(); i!=zz.end(); i++)
     {
        temp = (float*) *i;
        *temp += 10000.0;
     }

    cout << endl << "After changing value of zz:" << endl;
    for ( gr_vector_void_star::iterator i=zz.begin(); i!=zz.end(); i++)
     { cout << "The value of zz is " << *temp << endl; }

    return 0;
}
