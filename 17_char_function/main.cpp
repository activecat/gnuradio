#include <iostream>

using namespace std;

void f1( char *label)
{
    cout << "f1: label='" << label << "'" << endl;
}


int main()
{
    char *name = "Ku Shin Guan";

    f1(name);

    return 0;
}
