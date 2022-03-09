#ifndef MENADZER_HPP_INCLUDED
#define MENADZER_HPP_INCLUDED

#include "Zaposleni.hpp"

class Sef : public Zaposleni{
    private:
        string odeljenje;
    public:
        Sef(string, string, double, double, string);
        void promeniOdeljenje(string);
        friend ostream& operator<<(ostream &, const Sef &);
};

#endif // MENADZER_HPP_INCLUDED
