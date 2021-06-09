    #include <iostream>
    #include <cmath>

        #define k 215

using namespace std;

int main()
{
    float x;
    bool y;

    for (int i=0; i < 100; i++)
    {
        x = 5.0 - i / 10.0;
        y = signbit(x);
        cout << x << " is of sign " << y << endl;
    }

    cout << "k=" << k << endl;

    return 0;
}
