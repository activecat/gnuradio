#include <iostream>
using namespace std;




template <typename T,unsigned S> inline unsigned arraysize(const T (&v)[S]) { return S; }



int main()
{
    const char* sentences[] = {
          "The name you chose is too long.",
          "Spaces are not permitted in names.",
          "An invalid parameter was passed with 'set'.",
          "No valid color specified.",
          "No category found matching your request."
        };

    cout << "Array size of sentences is " << arraysize(sentences) << endl;
}
