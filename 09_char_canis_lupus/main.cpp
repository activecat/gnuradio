#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


typedef std::vector <void *> gr_vector_void_star;
gr_vector_void_star  output_items;

const char* sentence("Angel");
unsigned int counter(0);

const int noutput_items = 5;

int main()
{
    cout << "sentence is '" << sentence << "'" << endl;

    // by GNU Radio internal
    float *temp1[noutput_items];
    output_items.push_back(temp1);

    // store values at source_block
    float *out1 = (float *) output_items[0];
    for (int i=0; i < noutput_items; i++)
     { out1[i] = i * 1.1; }

    // retrieve values at sink_block
    float *display1 = (float *) output_items[0];
    for (int i=0; i < noutput_items; i++)
     { cout << display1[i] << endl; }

    cout << endl;

    // by GNU Radio internal
    char temp2[noutput_items];
    output_items.push_back(temp2);

    // store values at source_block
    char out2[noutput_items]; // = (char**) output_items[1];
    output_items[1] = out2;

    out2[0] = 'g';
    out2[1] = 'h';
    out2[2] = 'o';
    out2[3] = 's';
    out2[4] = 't';

    // retrieve values at sink_block
    char *display2 = (char*) output_items[1];
    for (int i=0; i < noutput_items; i++)
     { cout << display2[i] << endl; }

    cout << endl;

    // ------------------------------------------------------------------------------------
    // by GNU Radio internal
    char temp3[noutput_items];
    output_items.push_back(temp3);

    // store values at source_block
    char out3[noutput_items];
    output_items[2] = out3;

    const char* sentence("Angel");
    for (int i=0; i < noutput_items; i++)
     { out3[i] = sentence[i]; }


    // retrieve values at sink_block
    char *display3 = (char*) output_items[2];
    for (int i=0; i < noutput_items; i++)
     { cout << display3[i] << endl; }

    return 0;
}
