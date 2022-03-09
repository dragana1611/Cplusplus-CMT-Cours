#ifndef TACKA3D_HPP_INCLUDED
#define TACKA3D_HPP_INCLUDED

#include "Tacka2D.hpp"

class Tacka3D : public Tacka2D{
    private:
        int *z;
    public:
        Tacka3D(int, int, int);
        ~Tacka3D();
};


#endif // TACKA3D_HPP_INCLUDED
