#include <iostream>
#include <cmath>

using namespace std;

int error( int x, int y )
{
    int count = 0;
    int number = int(std::pow(2,8) - 1) & (x^y);
    for (int i=1; i <= number; i = i<<1)
        if (number & i)
            count++;
    return count;
}

int main()
{
    cout << "This has " << error(8,7) << " wrong bits." << endl;
    return 0;
}
