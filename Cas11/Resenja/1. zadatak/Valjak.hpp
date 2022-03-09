#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

#include <iostream>
using namespace std;

#include <cmath>

class Valjak{
    private:
        double *r;
        double *H;
    public:
        Valjak();
        Valjak(double, double);
        Valjak(const Valjak &);
        ~Valjak();
        bool setR(double);
        bool setH(double);
        double getR()const;
        double getH()const;
        double povrsina()const;
        double zapremina()const;
        Valjak& operator=(const Valjak &);
        Valjak& operator+=(const Valjak &);
        const Valjak& operator++();
        const Valjak operator++(int);
        friend Valjak operator+(const Valjak &, const Valjak &);
        friend bool operator==(const Valjak &, const Valjak &);
        friend ostream& operator<<(ostream&, const Valjak &);
};

#endif // VALJAK_HPP_INCLUDED
