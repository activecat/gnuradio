#include <iostream>
//#include <stdint.h>
//#include <cstdlib>
using namespace std;

std::string f1(int x)
{
    const unsigned int size = sizeof(x) * 8;
    unsigned int       index = size;
    char result[size];

    do    { result[--index] = '0' + (x & 1); }
    while (x >>= 1);

    return std::string(result + index, result + size);
}

int main()
{
    int k = 13;
    cout << "The result is '" << f1(k) << "'" << endl;
    cout << "Now k is " << k << endl;
    return 0;
}
