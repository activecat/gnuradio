#include <iostream>
#include <stdlib.h>
#include <time.h>

// http://www.cplusplus.com/articles/EywTURfi/

using namespace std;


void myGenerate()
{
    cout << "RAND_MAX is " << RAND_MAX << endl;
    for (int i=0; i < 5; i++)
        cout << rand() / (float)RAND_MAX << endl;
    cout << endl;
}


int main()
{
    cout << "time is " << time(NULL) << endl;
    myGenerate();

    srand( time(NULL) );
    myGenerate();



    return 0;
}
