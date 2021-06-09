#include <iostream>
using namespace std;

// http://www.cprogramming.com/reference/pointers/const_pointers.html

class A
{
    public:
        A( int ID )
         {
             cout << "--Constructor with ID=" << ID << endl;
             this->ID = ID;
         }

       ~A() { cout << "-~Destructor with ID=" << ID << endl; }

        int getID() const { return this->ID; }

        void setID(int ID)  { this->ID = ID; }

    private:
        int ID;
};


int main()
{
    cout << "Creating new A(10)" << endl;
    A *  ptr1 ( new A(10) );
    cout << "ID of ptr1 is " << ptr1->getID() << endl;
    ptr1->setID(11);
    cout << "ID of ptr1 is " << ptr1->getID() << " after changed."<< endl;
    cout << "Deleting ptr1" << endl;
    delete ptr1;
    ptr1 = NULL;
    cout << endl;

    const void * const ptr2 ( new A(20) );

    A * x = (A*) ptr2;
    cout << "ID of ptr2 is " << x->getID() << endl;
    x->setID(21);

    A * y = (A*) ptr2;
    cout << "ID of ptr2 is " << y->getID() << " after changed!  (not const?)"<< endl;
    delete y;

    cout << "End of main()" << endl;
    return 0;
}
