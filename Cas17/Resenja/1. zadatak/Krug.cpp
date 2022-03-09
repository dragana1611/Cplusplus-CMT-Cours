#include "Krug.hpp"

Krug::Krug() : Elipsa(1, 1){
    // TELO
}

Krug::Krug(double r) : Elipsa(r, r){
    // TELO
}

Krug::Krug(const Krug &k) : Elipsa( (Elipsa)k ) {
    // TELO
}

bool Krug::setR(double r){
    bool uspesno = false;
    if(r > 0){
        this -> x = r;
        this -> y = r;
        uspesno = true;
    }
    return uspesno;
}

double Krug::getR()const{
    return this -> x; // Moze se vratiti X ili Y jer su iste duzine
}

double Krug::povrsina()const{ // moze da se koristi x ili y jer su iste duzine
    return this -> x * this -> x * M_PI;
}

double Krug::obim()const{ // moze da se koristi x ili y jer su iste duzine
    return 2 * this -> x * M_PI;
}
