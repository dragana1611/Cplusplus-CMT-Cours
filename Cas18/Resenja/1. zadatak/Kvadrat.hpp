#ifndef KVADRAT_HPP_INCLUDED
#define KVADRAT_HPP_INCLUDED

#include "Pravougaonik.hpp"

class Kvadrat : public Pravougaonik{
    public:
        Kvadrat();
        Kvadrat(int);
        Kvadrat(const Kvadrat &k);
        double povrsina()const;
        double obim()const;
        void print()const;
};

#endif // KVADRAT_HPP_INCLUDED
