#include "Pare.hpp"

int main(){

    Pare p1, p2(1, RSD), p3(12, EUR), p4(p2);

    cout << "Operator ispisa: " << endl;
    cout << "         p1: " << p1 << endl;
    cout << " p2(1, RSD): " << p2 << endl;
    cout << "p3(12, EUR): " << p3 << endl;
    cout << "     p4(p2): " << p4 << endl << endl;

    cout << "Operator dodele =" << endl;
    cout << "p2 = p3 " << endl << endl;

    p2 = p3;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;
    cout << "p4: " << p4 << endl << endl;

    cout << "Operator sabiranje sa dodelom +=" << endl;
    cout << "p2 += p3 " << endl << endl;

    p2 += p3;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;
    cout << "p4: " << p4 << endl << endl;

    cout << "Operator oduzimanje sa dodelom -=" << endl;
    cout << "p2 -= p3 " << endl << endl;

    p2 -= p3;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;
    cout << "p4: " << p4 << endl << endl;

    cout << "Operator sabiranja +" << endl;
    cout << "p2 + p3 " << endl;
    cout << "p2 + p4 " << endl;
    cout << "p4 + p2 " << endl;
    cout << "p4 + p2 " << endl << endl;

    cout << "     p1: " << p1 << endl;
    cout << "     p2: " << p2 << endl;
    cout << "     p3: " << p3 << endl;
    cout << "     p4: " << p4 << endl;
    cout << "p2 + p3: " << p2 + p3 << endl;
    cout << "p2 + p4: " << p2 + p4 << endl;
    cout << "p3 + p2: " << p3 + p2 << endl;
    cout << "p4 + p2: " << p4 + p2 << endl << endl;

    cout << "Operator oduzimanja -" << endl;
    cout << "p2 - p3 " << endl;
    cout << "p2 - p4 " << endl;
    cout << "p4 - p2 " << endl;
    cout << "p4 - p2 " << endl << endl;

    cout << "     p1: " << p1 << endl;
    cout << "     p2: " << p2 << endl;
    cout << "     p3: " << p3 << endl;
    cout << "     p4: " << p4 << endl;
    cout << "p2 - p3: " << p2 - p3 << endl;
    cout << "p2 - p4: " << p2 - p4 << endl;
    cout << "p3 - p2: " << p3 - p2 << endl;
    cout << "p4 - p2: " << p4 - p2 << endl << endl;

    cout << "Operator prefiksnog inkremenitranja ++" << endl;
    cout << "++p1" << endl << endl;

    cout << "   ++p1: " << ++p1 << endl;
    cout << "     p1: " << p1 << endl;
    cout << "     p2: " << p2 << endl;
    cout << "     p3: " << p3 << endl;
    cout << "     p4: " << p4 << endl << endl;

    cout << "Operator postfiksnog inkremenitranja ++" << endl;
    cout << "p1++" << endl << endl;

    cout << "   p1++: " << p1++ << endl;
    cout << "     p1: " << p1 << endl;
    cout << "     p2: " << p2 << endl;
    cout << "     p3: " << p3 << endl;
    cout << "     p4: " << p4 << endl << endl;

    cout << "Operator prefiksnog dekrementiranja --" << endl;
    cout << "--p1" << endl << endl;

    cout << "   --p1: " << --p1 << endl;
    cout << "     p1: " << p1 << endl;
    cout << "     p2: " << p2 << endl;
    cout << "     p3: " << p3 << endl;
    cout << "     p4: " << p4 << endl << endl;

    cout << "Operator postfiksnog dekrementiranja --" << endl;
    cout << "p1--" << endl << endl;

    cout << "   p1--: " << p1-- << endl;
    cout << "     p1: " << p1 << endl;
    cout << "     p2: " << p2 << endl;
    cout << "     p3: " << p3 << endl;
    cout << "     p4: " << p4 << endl << endl;

    cout << "Operator provere jednakosti ==" << endl;
    cout << "p2 == p1 " << endl;
    cout << "p2 == p3 " << endl;
    cout << "p2 == p4 " << endl << endl;

    cout << "      p1: " << p1 << endl;
    cout << "      p2: " << p2 << endl;
    cout << "      p3: " << p3 << endl;
    cout << "      p4: " << p4 << endl;
    cout << "p2 == p1: " << ((p2 == p1) ? "DA" : "NE") << endl;
    cout << "p2 == p3: " << ((p2 == p3) ? "DA" : "NE") << endl;
    cout << "p2 == p4: " << ((p2 == p4) ? "DA" : "NE") << endl << endl;

    cout << "Operator provere nejednakosti !=" << endl;
    cout << "p2 != p1 " << endl;
    cout << "p2 != p3 " << endl;
    cout << "p2 != p4 " << endl << endl;

    cout << "      p1: " << p1 << endl;
    cout << "      p2: " << p2 << endl;
    cout << "      p3: " << p3 << endl;
    cout << "      p4: " << p4 << endl;
    cout << "p2 != p1: " << ((p2 != p1) ? "DA" : "NE") << endl;
    cout << "p2 != p3: " << ((p2 != p3) ? "DA" : "NE") << endl;
    cout << "p2 != p4: " << ((p2 != p4) ? "DA" : "NE") << endl << endl;

    cout << "Operator upisa >>" << endl;
    cout << "cin >> p1 " << endl << endl;

    cout << "Unesite iznos: ";
    cin >> p1;
    cout << endl;

    cout << "      p1: " << p1 << endl;
    cout << "      p2: " << p2 << endl;
    cout << "      p3: " << p3 << endl;
    cout << "      p4: " << p4 << endl;

    return 0;
}
