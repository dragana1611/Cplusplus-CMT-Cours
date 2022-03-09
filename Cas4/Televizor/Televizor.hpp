#ifndef TELEVIZOR_HPP_INCLUDED
#define TELEVIZOR_HPP_INCLUDED

#include <iostream>
using namespace std;

#define ZVUK_MIN 0
#define ZVUK_MAX 10

#define KANAL_MIN 1
#define KANAL_MAX 10

enum StanjeTV {ISKLJUCEN, UKLJUCEN};

class Televizor {
private:
    StanjeTV stanje;
    int kanal, zvuk;
public:
    Televizor();
    Televizor(const Televizor &);
    bool iskljuci();
    bool ukljuci();
    bool sledeciKanal();
    bool prethodniKanal();
    bool pojacajZvuk();
    bool smanjiZvuk();
    void prikazi()const;
};

#endif // TELEVIZOR_HPP_INCLUDED
