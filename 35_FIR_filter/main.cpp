/*
http://iowahills.com/Example%20Code/FIRIntegerImplementation.txt

This code implements an FIR filter using integer math.

The code isn't complicated, but there are a couple of points to notice.
The variable y is the accumulator, and it must be at least twice the size of RegisterSize.
RegisterSize is a global, typically 16 bits.

This code assumes the input signal and FIR coefficients are doubles limited between ±1.
We change them to integers by multiplying by 2^N. This changes the gain by 2^N squared,
which we correct with the last line of code so that the output is still between ±1.

Remember that these filters have delay, so you need to run the code for M points
longer than the number of data points to be filtered in order to get the entire
signal through the filter. A reasonable value for M is twice the group delay value.

*/


#include <iostream>
using namespace std;

long long RegisterSize = 500;

void RunIntegerFIRFilter(double *FirCoeff, int NumTaps, double *Signal, double *FilteredSignal, int NumSigPts)
{
     long long One = 1;
     double TwoToN = One << (RegisterSize-1); // Minus one because of the sign bit.
     long long Reg[256];
     long long IntFirCoeff[256];

     for( int j=0; j<256; j++ )
        Reg[j] = 0; // Init the delay registers.

     for( int j=0; j<NumTaps; j++ )
        IntFirCoeff[j] = int(TwoToN * FirCoeff[j]); // Round the coefficient to the nearest int

     long long y;
     for( int j=0; j<NumSigPts; j++ )
      {
           // Shift the register values down and set Reg[0].
           for( int k=NumTaps; k>1; k--)Reg[k-1] = Reg[k-2];
           Reg[0] = int(TwoToN * Signal[j]);  // Assumes  -1.0 < Signal < 1.0

           y = 0;
           for( int k=0; k<NumTaps; k++)
            {
             y += IntFirCoeff[k] * Reg[k];
            }
           FilteredSignal[j] = (double)y / TwoToN / TwoToN;
      }

}


int main()
{
    double x = (long long)1 << (long long)255;
    cout << "It is " << x << endl;
    return 0;
}
