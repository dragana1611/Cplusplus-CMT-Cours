#ifndef FUDBALER_HPP_INCLUDED
#define FUDBALER_HPP_INCLUDED

#include <iostream>
using namespace std;

class Fudbaler{
    private:
        string ime;
        string prezime;
        string grad;
        string klub;
        int brojNaDresu;
        int brojGolova;
    public:
        Fudbaler(string, string, string, string, int, int);
        string getIme()const;
        string getPrezime()const;
        string getGrad()const;
        string getKlub()const;
        int getBrojNaDresu();
        int getBrojGolova();
        void predstaviSe();
};

#endif // FUDBALER_HPP_INCLUDED
