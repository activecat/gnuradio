#include <iostream>
#include <complex>

using namespace std;

int main()
{
    std::complex <int> x(6,7);
    cout << x << endl;

    x.real(2);
    x.imag(5);
    cout << x << endl;

    std::complex <int> y(2,5);

    if ( x == y ) cout << "Equal" << endl;
    else          cout << "Not equal" << endl;

    std::complex<float> A(2,5);
    std::complex<float> B;

    B = std::exp(A);

    cout << "B is " << B << endl;



    return 0;
}
