#include "Kvadrat.hpp"

Kvadrat::Kvadrat() : Pravougaonik(1, 1) {
    // TELO
}

Kvadrat::Kvadrat(int a) : Pravougaonik(a, a) {
    // TELO
}

Kvadrat::Kvadrat(const Kvadrat &k) : Pravougaonik( k ){
    // TELO
}

double Kvadrat::povrsina()const{
    return duzina * duzina; // sirina je jednaka duzini, moze duzina * sirina ili sirina * sirina
}

double Kvadrat::obim()const{
    return 4 * duzina;
}

void Kvadrat::print()const{
    cout << "Kvadrat " << duzina << "x" << sirina << " ima povrsinu " << povrsina() << " i obim " << obim() << endl;
}
