#ifndef OBLIK_HPP_INCLUDED
#define OBLIK_HPP_INCLUDED

#include <iostream>
using namespace std;

class Oblik{
    protected:
        int duzina, sirina;
    public:
        Oblik();
        Oblik(int, int);
        Oblik(const Oblik &);
        virtual double povrsina()const = 0;
        virtual double obim()const = 0;
        virtual void print()const;
};

#endif // OBLIK_HPP_INCLUDED
