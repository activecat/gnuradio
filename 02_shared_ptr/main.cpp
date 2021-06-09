#include <iostream>
#include <boost/shared_ptr.hpp>
using namespace std;


class A
{
    public:
        A( int ID )
         {
             cout << " Creating an instance with ID: " << ID << endl;
             this->ID = ID;
         }
       ~A() { cout << " Deleting the instance of ID: " << this->ID << endl; }

    private:
        int ID;
};


typedef boost::shared_ptr <A> A_sptr;


int main()
{
    int i(5);  // assign value to variable i
    cout << "The value of i is " << i << endl << endl;

    cout << "Let's create ptr1 and ptr2 now" << endl;
    A *ptr1 ( new A(1001) );
    A *ptr2 = new A(1002);

    cout << "Let's end ptr1 now" << endl;
    delete ptr1;

    cout << endl;
    cout << "Let's start ptr2 now" << endl;
    A_sptr ptr3( new A(1003) );

    cout << endl;
    cout << "Let's quit main().  The instance of created using shared_ptr will be automatically destroyed." << endl;
    return 0;
}
