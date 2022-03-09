#include "Sef.hpp"

Sef::Sef(string ime, string prezime, string datumZaposlenja, Odeljenja odeljenje) : Zaposleni(ime, prezime, datumZaposlenja){
    this -> odeljenje = odeljenje;
}

Odeljenja Sef::getOdeljenje()const{
    return odeljenje;
}

void Sef::predstaviSe(){
    Zaposleni::predstaviSe();
    cout << ", sef odeljenju ";
    switch(odeljenje){
    case RACUNOVODSTVO:
        cout << "racunovodstava";
        break;
    case POGON:
        cout << "pogona";
        break;
    case RACUNARSKI_CENTAR:
        cout << "racunarskog centra";
        break;
    }
}
