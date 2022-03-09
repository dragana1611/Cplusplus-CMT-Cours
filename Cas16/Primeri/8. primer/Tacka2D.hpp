#ifndef TACKA2D_HPP_INCLUDED
#define TACKA2D_HPP_INCLUDED

#include <iostream>
using namespace std;

class Tacka2D{
    protected:
        int *x, *y;
    public:
        Tacka2D(int, int);
        ~Tacka2D();
};

#endif // TACKA2D_HPP_INCLUDED
