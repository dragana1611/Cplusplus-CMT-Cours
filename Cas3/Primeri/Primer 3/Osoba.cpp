#include "Osoba.hpp"

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
