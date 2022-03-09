#include "Pravougaonik.hpp"

Pravougaonik::Pravougaonik() : Oblik(){
    // TELO
}

Pravougaonik::Pravougaonik(int d, int s) : Oblik(d, s){
    // TELO
}

Pravougaonik::Pravougaonik(const Pravougaonik &p) : Oblik( p ){
    // TELO
}

double Pravougaonik::povrsina()const{
    return duzina * sirina;
}

double Pravougaonik::obim()const{
    return 2 * duzina + 2 * sirina;
}

void Pravougaonik::print()const{
    cout << "Pravougaonik " << duzina << "x" << sirina << " ima povrsinu " << povrsina() << " i obim " << obim() << endl;
}
