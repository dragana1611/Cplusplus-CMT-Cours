#include <iostream>
using namespace std;


int main(){

    int *p = new int;   // pravi se dinamicki objekat tipa int
    *p = 3;             // na koji ukazuje p, ovde objekat postaje 3
    cout << (*p);
    (*p)++;             //  a ovde postaje 4
    int i = *p;         // promenljiva i dobija vrednost 4
    cout << i;

    delete p;

    return 0;
}
