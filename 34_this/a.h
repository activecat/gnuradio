#ifndef A_H_INCLUDED
#define A_H_INCLUDED


class A
{
    public:
        A();
        int get_x();
        void set_x( int x );
        void special1( int x );
        void special2( int x );

    private:
        int x;
};

#endif // A_H_INCLUDED
