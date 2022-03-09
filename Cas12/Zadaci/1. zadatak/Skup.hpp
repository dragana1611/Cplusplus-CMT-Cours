#ifndef SKUP_HPP_INCLUDED
#define SKUP_HPP_INCLUDED

#include <iostream>
using namespace std;

class Skup{
    public:
        int *niz;
    public:
        Skup();
        Skup(int*, int);
        Skup(const Skup &);
        ~Skup();
        int sum()const;
        Skup& operator=(const Skup &);
        int& operator[](int);
        int operator[](int)const;
        friend Skup operator-(const Skup &, const Skup &);
        friend bool operator!=(const Skup &, const Skup &);
        friend ostream& operator<<(ostream &, const Skup &);
};


#endif // SKUP_HPP_INCLUDED
