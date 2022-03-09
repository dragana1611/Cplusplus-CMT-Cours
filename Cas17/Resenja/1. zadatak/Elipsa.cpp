#include "Elipsa.hpp"

Elipsa::Elipsa(){
    this -> x = 1;
    this -> y = 2;
}

Elipsa::Elipsa(double x, double y){
    this -> x = x;
    this -> y = y;
}

Elipsa::Elipsa(const Elipsa &e){
    this -> x = e.x;
    this -> y = e.y;
}

double Elipsa::getX()const{
    return this -> x;
}

double Elipsa::getY()const{
    return this -> y;
}

bool Elipsa::setX(double x){
    bool uspesno = false;
    if(x > 0){
        this -> x = x;
        uspesno = true;
    }
    return uspesno;
}

double Elipsa::setY(double y){
    bool uspesno = false;
    if(y > 0){
        this -> y = y;
        uspesno = true;
    }
    return uspesno;
}

double Elipsa::povrsina()const{
    return this -> x * this -> y * M_PI;
}

double Elipsa::obim(){
	return M_PI * (3 * (this -> x + this -> y) - sqrt( (3 * this -> x + this -> y) * (this -> x + 3 * this -> y)) );
}
