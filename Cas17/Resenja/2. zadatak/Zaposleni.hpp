#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED

#include <iostream>
using namespace std;

class Zaposleni{
    protected:
        string ime, prezime;
        double cenaSata, satiRada;
    public:
        Zaposleni(string, string, double, double);
        bool promenaCeneSata(double);
        bool promenaSatiRada(double);
        string getIme()const;
        string getPrezime()const;
        double getCenaSata()const;
        double getSatiRada()const;
        double plata()const;
        friend ostream& operator<<(ostream &, const Zaposleni &);
};

#endif // ZAPOSLENI_HPP_INCLUDED
