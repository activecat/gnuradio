#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector <int> x(0);
    cout << "test1: x.size() is " << x.size() << endl;
    for (std::vector <int>::iterator i = x.begin(); i != x.end(); i++)
        cout << *i << endl;

    //std::vector <int> x;
    x.resize(3,5);
    cout << endl << "test2: x.size() is " << x.size() << endl;
    for (std::vector <int>::iterator i = x.begin(); i != x.end(); i++)
        cout << *i << endl;

    x.resize(5,1);
    cout << endl << "test3: x.size() is " << x.size() << endl;
    for (int i=0; i < x.size(); i++)
        cout << x[i] << endl;

    x.resize(0);
    cout << endl << "test4: x.size() is " << x.size() << endl;

    x.resize(10);
    cout << endl << "test5: x.resize(10)" << endl;
    for (std::vector <int>::iterator i = x.begin(); i != x.end(); i++)
        cout << *i << endl;
    cout << endl;

    // Vector is cleaned up automatically
    // http://stackoverflow.com/questions/10990172/c-deleting-vector-class-member-memory-in-destructor
    return 0;
}
