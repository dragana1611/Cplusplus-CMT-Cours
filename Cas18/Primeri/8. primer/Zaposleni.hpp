#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED

#include "Osoba.hpp"

class Zaposleni : public Osoba{
    private:
        string datumZaposlenja;
    public:
        Zaposleni(string ime, string prezime, string datumZaposlenja);
        string getIme()const;
        string getPrezime()const;
        string getDatumZaposlenja()const;
        void predstaviSe();
};

#endif // ZAPOSLENI_HPP_INCLUDED
