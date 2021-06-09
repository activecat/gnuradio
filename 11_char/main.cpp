#include <iostream>
#include <vector>

typedef std::vector <void *> gr_vector_void_star;

int main()
{
    gr_vector_void_star  output_items;

    /////////////////////////////////
    //
    const size_t out_size = 5;
    char out[out_size];

    out[0] = 'G';
    out[1] = 'h';
    out[2] = 'o';
    out[3] = 's';
    out[4] = 't';

    output_items.push_back(out);

    ////////////////////////////////
    //
    const char* sentence("Angel");
    char out2[out_size];
    for(size_t i = 0; i < out_size; ++i)
    {
        out2[i] = sentence[i];
    }

    output_items.push_back(out2);

    ////////////////////////////////
    //
    char * display = static_cast<char *>(output_items[0]);
    for(size_t i = 0; i < out_size; ++i)
    {
        std::cout << "(1): " << display[i] << std::endl;
    }

    std::cout << "-------------------" << std::endl;

    display = static_cast<char *>(output_items[1]);
    for(size_t i = 0; i < out_size; ++i)
    {
        std::cout << "(2): " << display[i] << std::endl;
    }
}
