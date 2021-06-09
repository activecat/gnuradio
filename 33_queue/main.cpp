#include <iostream>
#include <queue>

using namespace std;

class A
{
  private:
    int ID;

  public:
    A(int ID)
     { this->ID = ID; }

    int get_ID()
     { return this->ID; }
};


int main()
{
    queue <A*> Q;

    Q.push( new A(2) );
    Q.push( new A(3) );
    Q.push( new A(5) );
    Q.push( new A(8) );

    A *x;

    while ( ! Q.empty() )
    {
        x = Q.front();
        Q.pop();

        cout << x->get_ID() << endl;
        delete x;
    }

    return 0;
}
