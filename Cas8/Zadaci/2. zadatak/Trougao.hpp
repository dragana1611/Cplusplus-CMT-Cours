#ifndef TROUGAO_HPP_INCLUDED
#define TROUGAO_HPP_INCLUDED

#include <iostream>
using namespace std;
// sistemska biblioteka u kojoj je definisana funkcija sqrt
#include <cmath>

class Trougao {
    private:
        /* POLJA */
        double a;
        double b;
        double c;
    public:
        /* Konstruktori */
        Trougao();
        Trougao(double, double, double );
        Trougao(const Trougao &t);

        /* set-metode */
        void setA(double aa);
        void setB(double bb);
        void setC(double cc);

        /* get-metode */
        double getA() const;
        double getB() const;
        double getC() const;

        /* ostale metode */
        double getO() const;
        double getP() const;
};

#endif // TROUGAO_HPP_INCLUDED
