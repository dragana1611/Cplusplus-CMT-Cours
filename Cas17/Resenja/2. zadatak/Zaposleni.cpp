#include "Zaposleni.hpp"

Zaposleni::Zaposleni(string ime, string prezime, double cenaSata, double satiRada){
    this -> ime = ime;
    this -> prezime = prezime;
    this -> cenaSata = cenaSata;
    this -> satiRada = satiRada;
}

bool Zaposleni::promenaCeneSata(double cenaSata){
    bool uspesno = false;
    if(cenaSata > 0){
        this -> cenaSata = cenaSata;
        uspesno = true;
    }
    return uspesno;
}

bool Zaposleni::promenaSatiRada(double satiRada){
    bool uspesno = false;
    if(satiRada > 0){
        this -> satiRada = satiRada;
        uspesno = true;
    }
    return uspesno;
}

string Zaposleni::getIme()const{
    return this -> ime;
}

string Zaposleni::getPrezime()const{
    return this -> prezime;
}

double Zaposleni::getCenaSata()const{
    return this -> cenaSata;
}

double Zaposleni::getSatiRada()const{
    return this -> satiRada;
}

double Zaposleni::plata()const{
    return cenaSata * satiRada;
}

ostream& operator<<(ostream &out, const Zaposleni &z){
    out << "       Radnik: " << z.ime << " " << z.prezime << endl;
    out << "    Cena sata: " << z.cenaSata << "rsd" << endl;
    out << "    Sati rada: " << z.satiRada << "h" << endl;
    out << "        Plata: " << z.plata() << "rsd";
    return out;
}
