#include "Kvadrat.hpp"

int main(){

    Oblik *o;
    Pravougaonik p1(2, 5);
    Kvadrat k1(3);

    p1.print();
    k1.print();

    o = &p1;
    o -> print();

    o = &k1;
    o -> print();

    return 0;
}
