#include "Oblik.hpp"

Oblik::Oblik(){
    duzina = 1;
    sirina = 2;
}

Oblik::Oblik(int d, int s){
    duzina = d;
    sirina = s;
}

Oblik::Oblik(const Oblik &o){
    duzina = o.duzina;
    sirina = o.sirina;
}

void Oblik::print()const{
    cout << "Oblik: " << duzina << "x" << sirina << endl;
}
