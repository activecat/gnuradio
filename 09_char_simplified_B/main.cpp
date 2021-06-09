#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


typedef std::vector <void *> gr_vector_void_star;

gr_vector_void_star  output_items;

int noutput_items = 5;


int main()
{
    // initialize output_items[0]
    const char* *temp[ noutput_items ];
    output_items.push_back( temp );

    // store values into output_items[0]
    const char* *out = (const char**) output_items[0];


    // out[0] = "A";   // this is also correct
    // out[1] = "n";
    // out[2] = "g";
    // out[3] = "e";
    // out[4] = "l";

    const char * sentence = "Angel";
    for (int i=0; i < 5; i++)
     {
         // out[i] = sentence[i];   // error: invalid conversion from 'char' to 'char*'  [-fpermissive]
         cout << sentence[i] << endl;
     }


//    cout << "To retrieve:" << endl;
//    // retrieve values from output_items[0]
//    const char* *display = (const char**) output_items[0];
//    for (int i=0; i < noutput_items; i++)
//     { cout << display[i] << endl; }

    return 0;
}
