#ifndef BANKOMAT_HPP_INCLUDED
#define BANKOMAT_HPP_INCLUDED

#include <iostream>
using namespace std;

enum Valuta {EUR, RSD};

struct Novac{
    double iznos;
    Valuta valuta;
};

struct Korisnik{
    int id; // autoinkrementalno polje
    string ime, prezime;
    Novac novac;
};

class Bankomat{
    private:
        string naziv;
        Korisnik *korisnici;
        int brojKorisnika;
    public:
        Bankomat(string);
        Bankomat(const Bankomat &);

        ~Bankomat();

        int sledeciId()const;

        bool dodajNovca(int, double, Valuta);

        void dodajKorisnika(string, string, double, Valuta);

        bool podigniNovac(int, double, Valuta);

        string getNaziv()const;

        Korisnik* getKorisnici()const;

        int getBrojKorisnika()const;
};

void prikazi(const Bankomat &);


#endif // BANKOMAT_HPP_INCLUDED
