#include "Valjak.hpp"

Valjak::Valjak(){
    r = new double(1);
    H = new double(2);
}

Valjak::Valjak(double rr, double HH){
    r = new double(rr);
    H = new double(HH);
}

Valjak::Valjak(const Valjak &v){
    r = new double(*v.r);
    H = new double(*v.H);
}

Valjak::~Valjak(){
    delete r;
    delete H;
}

bool Valjak::setR(double rr){
    bool uspesno = false;
    if(r > 0){
        *r = rr;
        uspesno = true;
    }
    return uspesno;
}

bool Valjak::setH(double HH){
    bool uspesno = false;
    if(H > 0){
        *H = HH;
        uspesno = true;
    }
    return uspesno;
}

double Valjak::getR()const{
    return *r;
}

double Valjak::getH()const{
    return *H;
}

double Valjak::povrsina()const{
    return 2 * (*r) * M_PI * ( (*r) + (*H) );
}

double Valjak::zapremina()const{
    return ( (*r) * (*r) * M_PI * (*H) );
}

Valjak& Valjak::operator=(const Valjak &v){
    *r = (*v.r);
    *H = (*v.H);
    return *this;
}

Valjak& Valjak::operator+=(const Valjak &v){
    *r += (*v.r);
    *H += (*v.H);
    return *this;
}

const Valjak& Valjak::operator++(){
    ++(*r);
    ++(*H);
    return *this;
}

const Valjak Valjak::operator++(int i){
    Valjak temp(*r, *H);
    ++(*r);
    ++(*H);
    return temp;
}

Valjak operator+(const Valjak &v1, const Valjak &v2){
    Valjak temp( (*v1.r) + (*v2.r), (*v1.H) + (*v2.H) );
    return temp;
}

bool operator==(const Valjak &v1, const Valjak &v2){
    return ( ((*v1.r) == (*v2.r)) && ((*v1.H) == (*v2.H))  );
}

ostream& operator<<(ostream &out, const Valjak &v){
    out << "r:" << *v.r << ", H:" << *v.H << ", p:" << v.povrsina() << ", v:" << v.zapremina();
    return out;
}
