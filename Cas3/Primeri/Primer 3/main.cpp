#include "Osoba.hpp"

int main(){

    Osoba ucenik1;
    Osoba ucenik2("Nenad", "Vuletic", 17);
    Osoba ucenik3(ucenik1);

    ucenik2.predstaviSe();


    return 0;
}
