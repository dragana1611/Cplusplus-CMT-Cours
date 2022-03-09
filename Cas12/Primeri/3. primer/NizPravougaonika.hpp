#ifndef NIZPRAVOUGAONIKA_H_INCLUDED
#define NIZPRAVOUGAONIKA_H_INCLUDED

#include <iostream>
using namespace std;

struct Pravougaonik{
    double a;
    double b;
};

class NizPravougaonika {
    private:
        int broj;
        Pravougaonik *elementi;
    public:
        NizPravougaonika();
        NizPravougaonika(int, Pravougaonik []);
        NizPravougaonika(const NizPravougaonika&);
        ~NizPravougaonika();
        int duzina() const;
        Pravougaonik& operator[](int);
        Pravougaonik operator[](int) const;
        NizPravougaonika& operator=(const NizPravougaonika&);
        NizPravougaonika& operator+=(const NizPravougaonika&);
        friend bool operator==(const NizPravougaonika&, const NizPravougaonika&);
        friend bool operator!=(const NizPravougaonika&, const NizPravougaonika&);
        friend NizPravougaonika operator+(const NizPravougaonika&, const NizPravougaonika&);
        friend ostream& operator<<(ostream&, const NizPravougaonika&);
};

#endif // NIZPRAVOUGAONIKA_H_INCLUDED
