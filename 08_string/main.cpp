#include <iostream>
#include <cstring>
using namespace std;

void f1( char * word )
{
    int l = strlen(word);
    cout << "The length of '" << word << "' is " << l << endl;
}


void f2( string word )
{
    int l = word.length();
    cout << "The length of '" << word << "' is " << l << endl;
}


int main()
{
    f1("miao moao");
    f2("hello activecat");

    cout << "sizeof(string) is " << sizeof(string) << endl;
    cout << "sizeof(char*)   is " << sizeof(char*) << endl;


    char *myName;
    myName = "SG Ku";
    cout << "myName is '" << (char*) myName << "'" << endl;

    const char *addr = "Felda Bukit Senggeh";
    cout << "addr is '" << addr << "' and its length is " << strlen(addr) << endl;

    for (int i=0; i < strlen(addr); i++)
    {
        cout << (char) addr[i] << "-";
    }
    cout << endl;

    return 0;
}
