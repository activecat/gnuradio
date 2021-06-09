#ifndef A_H_INCLUDED
#define A_H_INCLUDED

#include <boost/shared_ptr.hpp>

class A
{
  public:
    typedef boost::shared_ptr <A> sptr;
    static sptr make();

  private:
    //A();
};


#endif // A_H_INCLUDED
