#include "Niz.hpp"

Niz::Niz(){
    el = 0;
    p = NULL;
}

Niz::Niz(int *arr, int len){
    el = len;
    p = new int[len];
    for(int i = 0; i < el; ++i){
        *(p + i) = *(arr + i);
    }
}

Niz::Niz(const Niz &n){
    el = n.el;
    p = new int[el];
    for(int i = 0; i < el; ++i){
        *(p + i) = *(n.p + i);
    }
}

Niz::~Niz(){
    delete[] p;
}

int* Niz::sortiraj(VrstaSortiranja v){

    int *temp = new int[el];
    for(int i = 0; i < el; ++i){
        *(temp + i) = *(p + i);
    }

    switch(v){
        case RASTUCE:
            for(int i = 0; i < el - 1; ++i){
                for(int j = i + 1; j < el; ++j){
                    if(temp[i] > temp[j]){
                        int n = temp[i];
                        temp[i] = temp[j];
                        temp[j] = n;
                    }
                }
            }
            break;
        case OPADAJUCE:
            for(int i = 0; i < el - 1; ++i){
                for(int j = i + 1; j < el; ++j){
                    if(temp[i] < temp[j]){
                        int n = temp[i];
                        temp[i] = temp[j];
                        temp[j] = n;
                    }
                }
            }
            break;
    }

    return temp;
}

int Niz::suma()const{
    int suma = 0;
    for(int i = 0; i < el; ++i){
        suma += *(p + i);
    }
    return suma;
}

int Niz::elemenata()const{
    return el;
}

int* Niz::niz()const{
    return p;
}

void prikazi(const Niz &n){
    int *temp = n.niz();
    for(int i = 0; i < n.elemenata(); ++i){
        cout << *(temp + i) << " ";
    }

}
