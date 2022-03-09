#ifndef PRODAVNICA_HPP_INCLUDED
#define PRODAVNICA_HPP_INCLUDED

#include <iostream>
using namespace std;

enum VrstaSortiranja {RASTUCE, OPADAJUCE};
enum VrstaArtikla {NAJJEFTINIJI, NAJSKUPLJI};

struct Artikal{
    int sifra;
    string naziv;
    double cena;
};

class Prodavnica{
    private:
        string naziv;
        int el;
        Artikal **artikli;
    public:
        Prodavnica(string, int);
        ~Prodavnica();
        int brojMesta()const;
        int brojArtikala()const;
        string getNaziv()const;
        Artikal** getArtikli()const;
        bool dodajArtikal(Artikal);
        bool obrisiArtikal(int);
        bool azurirajCenu(int, double);
        void sortiraj(VrstaSortiranja);
        const Artikal* vrstaArtikla(VrstaArtikla)const;
};

void prikazi(const Prodavnica&);
void prikazi(const Artikal&);

#endif // PRODAVNICA_HPP_INCLUDED
