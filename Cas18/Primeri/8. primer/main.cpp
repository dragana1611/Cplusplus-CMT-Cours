#include "Sef.hpp"

int main(){

    Osoba *o;
    Zaposleni z("Marko", "Markovic", "01.01.2012");
    Sef s("Petar", "Petrovic", "12.04.2009", RACUNOVODSTVO);

    z.predstaviSe();
    cout << endl;

    s.predstaviSe();
    cout << endl;

    o = &z;
    o -> predstaviSe();
    cout << endl;

    o = &s;
    o -> predstaviSe();
    cout << endl;


    return 0;
}
