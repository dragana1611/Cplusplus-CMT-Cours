#include "Sef.hpp"

Sef::Sef(string ime, string prezime, double cenaSata, double satiRada, string odeljenje) : Zaposleni(ime, prezime, cenaSata, satiRada){
    this -> odeljenje = odeljenje;
}

void Sef::promeniOdeljenje(string odeljenje){
    this -> odeljenje = odeljenje;
}

ostream& operator<<(ostream &out, const Sef &s){
    out << (Zaposleni)s << endl;
    out << "Sef odeljenja: " << s.odeljenje;
    return out;
}
