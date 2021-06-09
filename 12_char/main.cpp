#include <iostream>

using namespace std;

int main()
{
    char ** out;

    char *sentence[] = {"A", "n", "g", "e", "l"};
    for (int i=0; i < 5; i++)
    	out[i] = sentence[i];

    for (int i=0; i < 5; i++)
    	cout << out[i] << endl;

    return 0;
}
