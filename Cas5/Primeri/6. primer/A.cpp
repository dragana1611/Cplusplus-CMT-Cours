#include "A.hpp"

int A::instanci = 0;

A::A(){
    x = 0;
    ++instanci;
}

A::A(int xx){
    x = xx;
    ++instanci;
}

A::A(const A &a){
    x = a.x;
    ++instanci;
}

A::~A(){
    --instanci;
}

int A::getX()const{
    return x;
}

int A::getInstanci()const{
    return instanci;
}
