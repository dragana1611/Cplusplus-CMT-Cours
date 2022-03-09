#include "Niz.hpp"

int main(){

    int niz[5] = {1, 5, 2, 3, 4};

    Niz n1;
    Niz n2(niz, 5);
    Niz n3(n1);

    cout << "N2" << endl;
    cout << "  el: " << n2.elemenata() << endl;
    cout << "  *p: ";
    prikazi(n2);
    cout << endl;
    cout << "Suma: " << n2.suma() << endl;
    cout << "Rastuce sortirani: ";

    int *p = n2.sortiraj(RASTUCE);
    for(int i = 0; i < n2.elemenata(); ++i){
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p;

    cout << "Opadajuce sortirani: ";
    p = n2.sortiraj(OPADAJUCE);
    for(int i = 0; i < n2.elemenata(); ++i){
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p;

    cout << "  *p: ";
    prikazi(n2);
    cout << endl;

    return 0;
}
