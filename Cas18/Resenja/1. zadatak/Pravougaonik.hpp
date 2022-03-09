#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED

#include "Oblik.hpp"

class Pravougaonik : public Oblik{
    public:
        Pravougaonik();
        Pravougaonik(int, int);
        Pravougaonik(const Pravougaonik &);
        double povrsina()const;
        double obim()const;
        void print()const;
};

#endif // PRAVOUGAONIK_HPP_INCLUDED
