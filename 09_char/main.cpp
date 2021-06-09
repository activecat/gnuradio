#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


typedef std::vector <void *> gr_vector_void_star;
gr_vector_void_star  output_items;

const char* sentence("Angel");
unsigned int counter(0);

int noutput_items = 5;

int main()
{
    cout << "sentence is '" << sentence << "'" << endl;

    // initialize output_items[0]
    float *temp1[ noutput_items ];
    output_items.push_back( temp1 );

    // store values into output_items[0]
    float *out1 = (float *) output_items[0];
    for (int i=0; i < noutput_items; i++)
     { out1[i] = i * 1.1; }

    // retrieve values from output_items[0]
    float *display1 = (float *) output_items[0];
    for (int i=0; i < noutput_items; i++)
     { cout << display1[i] << endl; }

    cout << endl;

    // initialize output_items[1]
    char* *temp2[ noutput_items ];
    output_items.push_back( temp2 );

    // store values into output_items[1]
    char* *out2 = (char**) output_items[1];
    out2[0] = "g";
    out2[1] = "h";
    out2[2] = "o";
    out2[3] = "s";
    out2[4] = "t";

    for (int i=0; i < noutput_items; i++)
     {
        // out2[i] = "k";     // this works!
        // out2[i] = sentence[i];          // error: invalid conversion from 'char' to 'char*' [-fpermissive]
        // out2[i] = (char) sentence[i];   // error: invalid conversion from 'char' to 'char*' [-fpermissive]
        // out2[i] = (char*) sentence[i];  // error: segmentation fault
     }

    // retrieve values from output_items[1]
    char* *display2 = (char**) output_items[1];
    for (int i=0; i < noutput_items; i++)
     { cout << display2[i] << endl; }

    return 0;
}
