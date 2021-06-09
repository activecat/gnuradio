#ifndef A_H_INCLUDED
#define A_H_INCLUDED

class A
{
    public:
        A()
         { this->x = 100; }

        A(int x)
         { this->x = x; }

        int get_x()
         { return this->x; }

        void set_x(int x)
         { this->x = x; }

    private:
        int x;

};


#endif // A_H_INCLUDED
