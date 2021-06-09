#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // cout << "min() = " << std::min(3,5) << endl;

    const int d_sFactor = 5;
    for (int i=0; i < 20; i++)
    {
        cout << i+1 << " : " << i % d_sFactor;
        if ( i % d_sFactor == 0 ) cout << "**" << endl;
        else cout << endl;
    }

    for (int i=0; i < 20; i++)
        cout << i << " / " << d_sFactor << " = " << i / d_sFactor << endl;

    return 0;
}
