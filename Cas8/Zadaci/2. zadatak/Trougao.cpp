#include "Trougao.hpp"

Trougao::Trougao() {
    a = 3;
    b = 4;
    c = 5;
}

Trougao::Trougao(double aa, double bb, double cc) {
    a = aa;
    b = bb;
    c = cc;
}

Trougao::Trougao(const Trougao &t) {
    a = t.a;
    b = t.b;
    c = t.c;
}

/* set-metode */
void Trougao::setA(double aa) {
    a = aa;
}

void Trougao::setB(double bb) {
    b = bb;
}

void Trougao::setC(double cc) {
    c = cc;
}

/* get-metode */
double Trougao::getA() const {
    return a;
}

double Trougao::getB() const {
    return b;
}

double Trougao::getC() const {
    return c;
}

/* ostale metode */
double Trougao::getO() const{
    return a + b + c;
}

double Trougao::getP() const {
    double s = (a + b + c)/ 2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
