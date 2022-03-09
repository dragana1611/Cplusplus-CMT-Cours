#include "Televizor.hpp"


int main()
{
    Televizor t1;
    Televizor t2(t1);

    t1.prikazi();
    t1.prethodniKanal();
    t1.prikazi();

    t1.ukljuci();
    t1.prethodniKanal();
    t1.prikazi();

    return 0;
}
