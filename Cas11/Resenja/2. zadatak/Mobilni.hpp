#ifndef MOBILNI_HPP_INCLUDED
#define MOBILNI_HPP_INCLUDED

#include <iostream>
using namespace std;

#define CENA_SMS 2.54

struct Poruka{
    string broj;
    string tekst;
    bool poslata;
};

class Mobilni{
    private:
        int memorija;
        double kredit;
        Poruka **poruke;
    public:
        Mobilni(int prostor, double dopuna);
        ~Mobilni();
        int kapacitet()const; // ukupno mesta
        int prostor()const; // neiskoriscena mesta
        int zauzeto()const; // iskoriscena mesta
        bool dopunaKredita(double iznosDopune);
        bool dodajSms(string brojPrimaoca, string tekstPoruke);  // dodaje novu poruku ukoliko mobilni ima prostora
        bool dodajSms(Poruka novaPoruka);  // dodaje novu poruku ukoliko mobilni ima prostora
        bool obrisiSms(); // brise sve sms-ove
        bool obrisiSms(string brojPrimaoca); // brise sve sms-ove ciji broj odgovara prosledjenom broju
        bool obrisiSms(string brojPrimaoca, string tekstPoruke); // brise samo sms ciji broj i tekst odgovara prosledjenom broju i tekstu
        bool azurirajSms(string brojPrimaoca, string noviTekst);  // azurira tekst svih sms-ova ciji broj odgovara prosledjenom broju, drugi parametar je novi tekst
        bool azurirajSms(string brojPrimaoca, string stariTekst, string noviTekst); // //azuirira samo tekst sms-a ciji broj i tekst odgovara prosledjenom broju i tekstu, trevi parametar je novi tekst
        bool posaljiSms();  // salje sve poruke koje nisu poslane ako telefon ima dovoljno kredita
        bool posaljiSMs(string brojPrimaoca); // salje sve poruke primaoca ako telefon ima dovoljno kredita
        friend ostream& operator<<(ostream &out, const Mobilni &mobilniTelefon);
};

#endif // MOBILNI_HPP_INCLUDED
