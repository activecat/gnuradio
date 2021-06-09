#include <iostream>
#include <cmath>
//#include <math.h>

//using namespace std;

int main()
{
    for (float i=0.0; i < 3.142; i += 0.1)
        std::cout << std::sin(i) << ", " << std::cos(i)<< std::endl;

    std::cout << "PI is " << M_PI << std::endl;

    return 0;
}
