#ifndef NIZ_HPP_INCLUDED
#define NIZ_HPP_INCLUDED

#include <iostream>
using namespace std;

enum VrstaSortiranja{RASTUCE, OPADAJUCE};

class Niz{
    private:
        int el;
        int *p;
    public:
        Niz();
        Niz(int *, int);
        Niz(const Niz &);
        ~Niz();
        int* sortiraj(VrstaSortiranja);
        int suma()const;
        int elemenata()const;
        int* niz()const;
};

void prikazi(const Niz&);

#endif // NIZ_HPP_INCLUDED
