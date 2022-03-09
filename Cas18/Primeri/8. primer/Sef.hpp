#ifndef SEF_HPP_INCLUDED
#define SEF_HPP_INCLUDED

#include "Zaposleni.hpp"

enum Odeljenja{RACUNOVODSTVO, POGON, RACUNARSKI_CENTAR};

class Sef : public Zaposleni{
    private:
        Odeljenja odeljenje;
    public:
        Sef(string ime, string prezime, string datumZaposlenja, Odeljenja odeljenje);

        Odeljenja getOdeljenje()const;

        void predstaviSe();
};

#endif // SEF_HPP_INCLUDED
