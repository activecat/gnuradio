#include <iostream>
#include <boost/shared_ptr.hpp>
using namespace std;

class A;

typedef boost::shared_ptr <A>  A_sptr;


// use private constructor (as below) to guarantee that all pointers of instance A are Boost smart pointers.

class A
{
    friend A_sptr make_A( int ID );

    public:
      ~A() { cout << "~~Deleting instance of A" << endl;    }
      void speak() { cout << "Hello, my ID is " << this->ID << endl; }


    private:
      A (int ID)
      {
          cout << "--Creating instance of A with ID=" << ID << endl;
          this->ID = ID;
      }

      int ID;
};


A_sptr make_A( int ID )
{
    return A_sptr( new A(ID) );
}


int main()
{
//  A* ptr1 = new A;        // not allowed because the constructor of A is private.
//  A_sptr ptr2( new A );   // now allowed because the constructor of A is private.
//  A* ptr3 = make_A(33);   // not allowed because the return value of make_A() is a smart pointer, not normal pointer. (type mismatch)
    A_sptr ptr4( make_A(1221) );
    ptr4->speak();

    cout << "End of main()" << endl;
    return 0;
}
