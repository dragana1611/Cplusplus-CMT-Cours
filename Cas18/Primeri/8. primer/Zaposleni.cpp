#include "Zaposleni.hpp"

Zaposleni::Zaposleni(string ime, string prezime, string datumZaposlenja) : Osoba(ime, prezime){
    this -> datumZaposlenja = datumZaposlenja;
}

string Zaposleni::getIme()const{
    return ime;
}

string Zaposleni::getPrezime()const{
    return prezime;
}

string Zaposleni::getDatumZaposlenja()const{
    return datumZaposlenja;
}

void Zaposleni::predstaviSe(){
    Osoba::predstaviSe();
    cout << ", u radnom odnosu od " << datumZaposlenja;
}
