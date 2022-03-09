#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED

#include "Elipsa.hpp"

class Krug : private Elipsa{    // Ne moze da se nasledi publiic jer ce biti dostupne metode getX(), getY(), i td, a krug ima samo getR()
    public:
        Krug();
        Krug(double);
        Krug(const Krug &);
        bool setR(double);
        double getR()const;
        double povrsina()const;
        double obim()const;
};

#endif // KRUG_HPP_INCLUDED
