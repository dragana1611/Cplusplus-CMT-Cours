#ifndef PARE_HPP_INCLUDED
#define PARE_HPP_INCLUDED

#include <iostream>
using namespace std;

enum Valute {RSD, EUR};

class Pare{
    private:
        double iznos;
        Valute valuta;
    public:
        Pare();
        Pare(double, Valute);
        Pare(const Pare &);

        Pare& operator=(const Pare &);
        Pare& operator+=(const Pare &);
        Pare& operator-=(const Pare &);

        Pare& operator++();
        Pare operator++(int);

        Pare& operator--();
        Pare operator--(int);

        friend Pare operator+(const Pare &, const Pare &);
        friend Pare operator-(const Pare &, const Pare &);

        friend bool operator==(const Pare &, const Pare &);
        friend bool operator!=(const Pare &, const Pare &);

        friend ostream& operator<<(ostream&, const Pare &);
        friend istream& operator>>(istream&, Pare &);
};

#endif // PARE_HPP_INCLUDED
