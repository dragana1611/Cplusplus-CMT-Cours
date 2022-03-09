#include "Krug.hpp"

int main(){
    Elipsa e1;
    Elipsa e2(2, 5);
    Elipsa e3(e1);

    cout << fixed << setprecision(2);

    cout << "e1: " << endl;
    cout << "x=" << e1.getX() << ", y=" << e1.getY() << ", P=" << e1.povrsina() << ", O=" << e1.obim() << endl << endl;

    cout << "e2: " << endl;
    cout << "x=" << e2.getX() << ", y=" << e2.getY() << ", P=" << e2.povrsina() << ", O=" << e2.obim() << endl << endl;

    cout << "e3: " << endl;
    cout << "x=" << e3.getX() << ", y=" << e3.getY() << ", P=" << e3.povrsina() << ", O=" << e3.obim() << endl << endl;

    Krug k1;
    Krug k2(3);
    Krug k3(k1);

    cout << "k1: " << endl;
    cout << "r" << k1.getR() << ", P=" << k1.povrsina() << ", O=" << k1.obim() << endl << endl;

    cout << "k2: " << endl;
    cout << "r" << k2.getR() << ", P=" << k2.povrsina() << ", O=" << k2.obim() << endl << endl;

    cout << "k3: " << endl;
    cout << "r" << k3.getR() << ", P=" << k3.povrsina() << ", O=" << k3.obim() << endl << endl;

    return 0;
}
