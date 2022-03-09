#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED

#include <iostream>
using namespace std;

class Pravougaonik{
    private:
        int a, b;
    public:
        Pravougaonik();
        Pravougaonik(int, int);
        Pravougaonik(const Pravougaonik &);
        int duzina() const;
        int sirina() const;
        void postaviVrednosti(int, int);
        int povrsina() const;
        int obim() const;
};

#endif // PRAVOUGAONIK_HPP_INCLUDED
