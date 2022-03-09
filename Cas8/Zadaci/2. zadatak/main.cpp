#include "Trougao.hpp"

int main(){

    Trougao t1, t2(6, 8, 10), t3(t1);

    cout << "Duzina stranice a: " << t1.getA() << endl;
    cout << "Duzina stranice b: " << t1.getB() << endl;
    cout << "Duzina stranice c: " << t1.getC() << endl;
    cout << "Obim: " << t1.getO() << endl;
    cout << "Povrsina: " << t1.getP() << endl << endl;

    t1.setA(6);
    t1.setB(8);
    t1.setC(10);

    cout << "Duzina stranice a: " << t1.getA() << endl;
    cout << "Duzina stranice b: " << t1.getB() << endl;
    cout << "Duzina stranice c: " << t1.getC() << endl;
    cout << "Obim: " << t1.getO() << endl;
    cout << "Povrsina: " << t1.getP() << endl;

    return 0;
}
