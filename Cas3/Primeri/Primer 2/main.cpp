#include "Osoba.hpp"

int main(){

    Osoba ucenik1;
    Osoba ucenik2("Nenad", "Vuletic", 17);
    Osoba ucenik3(ucenik1); // konstruktor kopije -> ucenik3 novi objekat sa istim vrednostima

    ucenik2.predstaviSe();


    return 0;
}
