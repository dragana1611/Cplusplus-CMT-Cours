#ifndef ELIPSA_HPP_INCLUDED
#define ELIPSA_HPP_INCLUDED

#include <iostream>
using namespace std;

#include <cmath>    // deklarisane razne matematicke funkcije, konstante
#include <iomanip> // manipulisanje sa sadrzajem koji se prikazuje na izlazu
                   // fixed - prikazuje i neznacajna mesta, npr. bez njega bi 4.3200 bilo prikazanko kao 4.32
                   // setprecison(x) - broj decimalnih mesta koji treba prikazati, ako je veci dopisuje neznacajne 0

class Elipsa{
    protected:
        double x, y;
    public:
        Elipsa();
        Elipsa(double, double);
        Elipsa(const Elipsa &);
        double getX()const;
        double getY()const;
        bool setX(double);
        double setY(double);
        double povrsina()const;
        double obim();
};


#endif // ELIPSA_HPP_INCLUDED
