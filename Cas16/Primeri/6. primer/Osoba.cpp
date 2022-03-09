#include "Osoba.hpp"

Osoba::Osoba(string i, string p, string g){
    ime = i;
    prezime = p;
    grad = g;
}

string Osoba::getIme()const{
    return ime;
}

string Osoba::getPrezime()const{
    return prezime;

}

string Osoba::getGrad()const{
    return grad;
}

void Osoba::predstaviSe(){
    cout << "Ja sam " << ime << " " << prezime << ", dolazim iz " << grad;
}
