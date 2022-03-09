#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include <iostream>
using namespace std;

class Osoba{
    protected:
        string ime, prezime;
    public:
        Osoba(string ime, string prezime);

        virtual string getIme()const = 0;
        virtual string getPrezime()const = 0;

        virtual void predstaviSe();
};

#endif // OSOBA_HPP_INCLUDED
