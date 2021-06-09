#include <iostream>
#include <complex>
using namespace std;

typedef std::complex <float> gr_complex;


int main()
{
    gr_complex x(3,4);
    cout << "real part is " << x.real() << endl;
    cout << "imag part is " << x.imag() << endl;
    cout << "x is " << x << endl;

    if ( x == gr_complex(3,4) )
        cout << "It is true that it equals to (3,4) !" << endl;

    x.real(5);
    x.imag(6);
    cout << "real part is " << x.real() << endl;
    cout << "imag part is " << x.imag() << endl;
    cout << "x is " << x << endl;

    gr_complex y(10,10);
    y += x;
    cout << "y is " << y << endl;

    y.real( y.real()/2 );
    y.imag( y.imag()/2 );

    cout << "y/2 is " << y << endl;

    y /= 2;

    cout << "y is now " << y << endl;

    cout << "j is actually " << gr_complex(0,1) << endl;

    return 0;
}
