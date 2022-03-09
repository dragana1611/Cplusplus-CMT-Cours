#include "Osoba.hpp"

Osoba::Osoba(string ime, string prezime){
    this -> ime = ime;
    this -> prezime = prezime;
}

void Osoba::predstaviSe(){
    cout << "Osoba: " << ime << " " << prezime;
}
