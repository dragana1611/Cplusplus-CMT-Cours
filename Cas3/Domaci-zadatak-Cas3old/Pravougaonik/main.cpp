#include "Pravougaonik.hpp"

int main(){

    Pravougaonik p1;
    Pravougaonik p2(4, 6);
    Pravougaonik p3(p1);

    cout << "Prazan konstruktor (1, 2)" << endl;
    cout << "a=" << p1.duzina() << ", b=" << p1.sirina() << endl;
    cout << "P: " << p1.povrsina() << endl;
    cout << "O: " << p1.obim() << endl;
    cout << "p1.postaviVrednosti(3, 1);" << endl;
    p1.postaviVrednosti(3, 1);
    cout << "a=" << p1.duzina() << ", b=" << p1.sirina() << endl;
    cout << "P: " << p1.povrsina() << endl;
    cout << "O: " << p1.obim() << endl << endl;

    cout << "Konstruktor sa parametrima (4, 6)" << endl;
    cout << "a=" << p2.duzina() << ", b=" << p2.sirina() << endl;
    cout << "P: " << p2.povrsina() << endl;
    cout << "O: " << p2.obim() << endl;
    cout << "p2.postaviVrednosti(2, 5);" << endl;
    p2.postaviVrednosti(2, 5);
    cout << "a=" << p2.duzina() << ", b=" << p2.sirina() << endl;
    cout << "P: " << p2.povrsina() << endl;
    cout << "O: " << p2.obim() << endl << endl;

    cout << "Konstruktor kopije " << endl;
    cout << "a=" << p3.duzina() << ", b=" << p3.sirina() << endl;
    cout << "P: " << p3.povrsina() << endl;
    cout << "O: " << p3.obim() << endl;
    cout << "p3.postaviVrednosti(5, 9);" << endl;
    p3.postaviVrednosti(5, 9);
    cout << "a=" << p3.duzina() << ", b=" << p3.sirina() << endl;
    cout << "P: " << p3.povrsina() << endl;
    cout << "O: " << p3.obim() << endl << endl;

    return 0;
}
