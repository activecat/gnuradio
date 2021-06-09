#include <iostream>
#include <fftw3.h>
using namespace std;

// refer to codeblocks project:  freq_analysis/08_fftshift

unsigned int N = 16;
unsigned int half_N = N/2;

fftw_complex *myInput;
fftw_plan     myPlan;

int main()
{
    cout << "FFTW test for gnuradio" << endl;

    myInput = (fftw_complex*) fftw_malloc( sizeof(fftw_complex) * N);

    myPlan  = fftw_plan_dft_1d( N, myInput, myInput, FFTW_BACKWARD, FFTW_ESTIMATE );

    // initialize the input
    for (int i=0; i < half_N; i++)
    {
        myInput[i][0] = 64.0;
        myInput[i][1] = 0.0;
    }
    for (int i=half_N; i < N; i++)
    {
        myInput[i][0] = 0.0;
        myInput[i][1] = 0.0;
    }

    fftw_execute(myPlan);  // repeat as needed

    // normalise
    for (int i=0; i < N; i++)
    {
        myInput[i][0] /= N;
        myInput[i][1] /= N;
    }

    // fft_shift
    fftw_complex *temp1 = (fftw_complex*) fftw_malloc( sizeof(fftw_complex) * 1 );
    for (int j=0; j < 2; j++)  // for each of real and imaginery part
        for (int i=0; i < half_N; i++)
        {
            temp1[0][j]   = myInput[i][j];
            myInput[i][j] = myInput[i+half_N][j];
            myInput[i+half_N][j] = temp1[0][j];
        }

    // show results
    for (int i=0; i < N; i++)
        cout << "myInput[" << i << "] = complex(" << myInput[i][0] << ", " << myInput[i][1] << ")"<< endl;


    // free the allocated memory
    fftw_destroy_plan(myPlan);
    fftw_free(myInput);

    return 0;
}
