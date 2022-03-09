#include "Fudbaler.hpp"

Fudbaler::Fudbaler(string i, string p, string g, string kl, int brDr, int brGl) : Osoba(i, p, g){
    klub = kl;
    brojNaDresu = brDr;
    brojGolova = brGl;
}

string Fudbaler::getKlub()const{
    return klub;
}

int Fudbaler::getBrojNaDresu(){
    return brojNaDresu;
}

int Fudbaler::getBrojGolova(){
    return brojGolova;
}

void Fudbaler::predstaviSe(){
        cout << "Ja sam " << Osoba::getIme() << " " << Osoba::getPrezime() << ", dolazim iz " << Osoba::getGrad()
         << ", treniram u klubu " << klub << ", moj broj dresa je " << brojNaDresu
         << ", dao sam " << brojGolova << " gola";
}
