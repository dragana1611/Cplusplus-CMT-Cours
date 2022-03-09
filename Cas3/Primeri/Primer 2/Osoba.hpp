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
        Osoba(const Osoba&);
        void predstaviSe();
};

Osoba::Osoba(){
    ime = "";
    prezime = "";
    godina = 0;
}

Osoba::Osoba(string i, string p, int g){
    ime = i;
    prezime = p;
    godina = g;
}

Osoba::Osoba(const Osoba& o){
    ime = o.ime;
    prezime = o.prezime;
    godina = o.godina;
}

void Osoba::predstaviSe(){
    cout << ime << " " << prezime << " " << godina << endl;
}

#endif // OSOBA_HPP_INCLUDED
