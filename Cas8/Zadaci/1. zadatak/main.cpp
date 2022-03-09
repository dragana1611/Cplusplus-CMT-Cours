#include "Bankomat.hpp"

int main(){
    Bankomat komercijalna("Komercijalna banka");

    prikazi(komercijalna);

    komercijalna.dodajKorisnika("Ivan","Stojic", 100, RSD);
    prikazi(komercijalna);

    komercijalna.dodajKorisnika("Marko","Markovic", 100, EUR);
    prikazi(komercijalna);

    komercijalna.dodajKorisnika("Sanja","Markovic", 200, RSD);
    prikazi(komercijalna);

    komercijalna.dodajNovca(2, 11, EUR);
    prikazi(komercijalna);

    Bankomat komercijalna2(komercijalna);
    cout << "Kopije" << endl;
    prikazi(komercijalna2);

    return 0;
}
