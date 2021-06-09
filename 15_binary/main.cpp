#include <iostream>
using namespace std;

std::string f1(int x)
{
    cout << "sizeof(int) is " << sizeof(int) << endl;
    const unsigned int size = sizeof(x) * 8;
    unsigned int       index = size;
    char result[size];

    for (int i=0; i < size; i++)
    {
        result[ --index ] = '0' + (x & 1);
        x >>= 1;
    }

    return std::string(result, result + size);
}

int main()
{
    int k = 6;
    cout << "The result is '" << f1(k) << "'" << endl;
    cout << "Now k is " << k << endl;
    return 0;
}
