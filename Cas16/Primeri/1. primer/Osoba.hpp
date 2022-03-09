#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include <iostream>
using namespace std;


class Osoba{
    private:
        string ime;
        string prezime;
        string grad;
    public:
        Osoba(string, string, string);
        string getIme()const;
        string getPrezime()const;
        string getGrad()const;
        void predstaviSe();
};

#endif // OSOBA_HPP_INCLUDED
