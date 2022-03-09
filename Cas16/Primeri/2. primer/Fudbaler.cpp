#include "Fudbaler.hpp"

Fudbaler::Fudbaler(string i, string p, string g, string kl, int brDr, int brGl){
    ime = i;
    prezime = p;
    grad = g;
    klub = kl;
    brojNaDresu = brDr;
    brojGolova = brGl;
}

string Fudbaler::getIme()const{
    return ime;
}

string Fudbaler::getPrezime()const{
    return prezime;

}

string Fudbaler::getGrad()const{
    return grad;
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
    cout << "Ja sam " << ime << " " << prezime << ", dolazim iz " << grad
         << ", treniram u klubu " << klub << ", moj broj dresa je " << brojNaDresu
         << ", dao sam " << brojGolova << " gola";
}
