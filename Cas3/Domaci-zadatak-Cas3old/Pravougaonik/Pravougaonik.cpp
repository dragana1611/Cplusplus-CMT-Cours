#include "Pravougaonik.hpp"

Pravougaonik::Pravougaonik(){
    a = 1;
    b = 2;
}

Pravougaonik::Pravougaonik(int aa, int bb){
    a = aa;
    b = bb;
}

Pravougaonik::Pravougaonik(const Pravougaonik &p){
    a = p.a;
    b = p.b;
}

int Pravougaonik::duzina() const{
    return a;
}

int Pravougaonik::sirina() const{
    return b;
}

void Pravougaonik::postaviVrednosti(int aa, int bb){
    a = aa;
    b = bb;
}

int Pravougaonik::povrsina() const{
    return a * b;
}

int Pravougaonik::obim() const{
    return 2 * a + 2 * b;
}
