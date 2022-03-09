#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED

#include <iostream>
using namespace std;

enum StanjeMotora {POKVAREN, ISKLJUCEN, UKLJUCEN};

class Motor{
    private:
        StanjeMotora stanje;
        int nivoUlja;
        int nivoGoriva;
        int brzina;
    public:
        Motor();
        bool ukljuci();
        bool iskljuci();
        bool popravi();
        bool dodajGas();
        bool smanjiGas();
        bool natociUlja(int);
        bool natociGoriva(int);
        StanjeMotora getStanje()const;
        int getNivoUlja()const;
        int getNivoGoriva()const;
        int getBrzina()const;
};

void prikazi(const Motor &);

#endif // MOTOR_HPP_INCLUDED
