#include "Osoba.hpp"

int main(){
    Osoba o1("Marko", "Maric", "Novi Sad");
    o1.predstaviSe();
    cout << endl;
    cout << "Ja sam " << o1.getIme() << " " << o1.getPrezime() << ", dolazim iz " << o1.getGrad();

    return 0;
}
