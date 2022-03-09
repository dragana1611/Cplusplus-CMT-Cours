#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include <iostream>
using namespace std;

class Osoba{
    private:
        string ime, prezime;
        int godina;
    public:
        Osoba();
        Osoba(string, string, int);
        Osoba(const Osoba&); //konstruktor kopije -> ucenik3 novi objekat sa istim vrednostima
        void predstaviSe();
};

#endif // OSOBA_HPP_INCLUDED
