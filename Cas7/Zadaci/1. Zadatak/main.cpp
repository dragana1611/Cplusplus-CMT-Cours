#include "Motor.hpp"

int main(){

    Motor m;
    prikazi(m);

    cout << endl << endl;

    m.ukljuci();
    prikazi(m);

    cout << endl << endl;

    m.dodajGas();
    m.dodajGas();
    m.dodajGas();
    m.dodajGas();
    m.dodajGas();
    m.dodajGas();
    m.dodajGas();
    m.dodajGas();
    prikazi(m);

    cout << endl << endl;

    m.dodajGas();
    prikazi(m);

    cout << endl << endl;

    m.popravi();
    prikazi(m);

    cout << endl << endl;

    m.natociUlja(19);
    prikazi(m);

    cout << endl << endl;

    m.ukljuci();
    prikazi(m);

    cout << endl << endl;
    m.dodajGas();
    m.dodajGas();
    m.dodajGas();
    m.dodajGas();
    prikazi(m);

    cout << endl << endl;


    return 0;
}
