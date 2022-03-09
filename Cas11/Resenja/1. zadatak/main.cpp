#include "Valjak.hpp"




int main(){

    Valjak v1;          // prazan konstruktor
    Valjak v2(3, 4);   // konstruktor sa parametrima
    Valjak v3(5, 6);    // konstruktor sa parametrima
    Valjak v4(v1);      // konstruktor kopije

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << v4 << endl << endl;

    cout << "v4.setR(5); v4.setH(8);" << endl;
    v4.setR(5);
    v4.setH(8);
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << v4 << endl << endl;

    cout <<"v4=v2" << endl;
    v4 = v2;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << v4 << endl << endl;

    cout <<"v4+=v3" << endl;
    v4 += v3;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << v4 << endl << endl;

    cout <<"++v4" << endl;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << ++v4 << endl << endl;

    cout <<"v4++" << endl;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << v4++ << endl << endl;

    cout <<"v3 + v4" << endl;
    cout << "v3+v4: " << v3 + v4 << endl;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << v4 << endl << endl;

    cout << "v1=v2;" << endl;
    v1 = v2;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << v4 << endl << endl;

    cout << "v1 == v2; v1 == v3" << endl;
    cout << "v1==v2: " << (v1 == v2 ? "DA" : "NE") << endl;
    cout << "v1==v3: " << (v1 == v3 ? "DA" : "NE") << endl;


    return 0;
}
