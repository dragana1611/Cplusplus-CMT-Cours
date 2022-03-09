#ifndef FUDBALER_HPP_INCLUDED
#define FUDBALER_HPP_INCLUDED

#include "Osoba.hpp"

class Fudbaler : public Osoba{
    private:
        string klub;
        int brojNaDresu;
        int brojGolova;
    public:
        Fudbaler(string, string, string, string, int, int);
        string getKlub()const;
        int getBrojNaDresu();
        int getBrojGolova();
        void predstaviSe();
};

#endif // FUDBALER_HPP_INCLUDED
