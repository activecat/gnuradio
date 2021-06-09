#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    for ( float i=0; i < 10; i += 0.1)
    {
        x = i / 2.0;
        cout << i << " / 2.0  gets " << x << endl;
    }

    return 0;
}
