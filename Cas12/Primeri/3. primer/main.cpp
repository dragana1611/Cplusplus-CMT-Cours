#include "NizPravougaonika.hpp"

int main(){

    Pravougaonik p1 = {5, 16};
    Pravougaonik p2 = {6, 22};
    Pravougaonik p3 = {7, 30};
    Pravougaonik p4 = {8, 39};
    Pravougaonik p5 = {9, 50};
    Pravougaonik p6 = {10, 62};

    Pravougaonik niz1[4] = { {1, 2}, {2, 4}, {3, 7}, {4, 11} };
    Pravougaonik niz2[6] = { p1, p2, p3, p4, p5, p6 };

    NizPravougaonika np1;
    NizPravougaonika np2(4, niz1);
    NizPravougaonika np3(6, niz2);
    NizPravougaonika np4(6, niz2);

    // pozivanje operatorske prijateljske funkcije ispisa <<
    cout << "np1: " << endl;
    cout << np1 << endl;

    cout << "np2: " << endl;
    cout << np2 << endl;

    cout << "np3: " << endl;
    cout << np3 << endl;

    cout << "np4: " << endl;
    cout << np4 << endl;

    // pozivanje operatora dodele =
    np1 = np2;
    cout << "np1 = np2: " << endl;
    cout << np1 << endl;

    // pozivanje operatora sabiranje sa dodelom +=
    np1 += np3;
    cout << "np1 += np3: " << endl;
    cout << np1 << endl;


    // pozivanje operatorske prijateljske funkcije jednakosti ==
    cout << "np1 == np1: " << endl;
    cout << (np1 == np1 ? "DA" : "NE") << endl;
    cout << "np1 == np2: " << endl;
    cout << (np1 == np2 ? "DA" : "NE") << endl << endl;

    // pozivanje operatorske prijateljske funkcije nejednakosti !=
    cout << "np1 != np1: " << endl;
    cout << (np1 != np1 ? "DA" : "NE") << endl;
    cout << "np1 != np2: " << endl;
    cout << (np1 != np2 ? "DA" : "NE") << endl << endl;

    // pozivanje operatorske prijateljske funkcije sabiranja +
    cout << "np1 + np4: " << endl;
    cout << (np1 + np4) << endl;


    return 0;
}
