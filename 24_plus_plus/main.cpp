#include <iostream>

using namespace std;

int main()
{
    unsigned int x;

    for (int i=0; i < 10; i++)
    {
        if ( ++x > 5 )
            cout << "x=" << x << " which is higher than 5" << endl;
        else
            cout << "x=" << x << endl;
    }

    return 0;
}
