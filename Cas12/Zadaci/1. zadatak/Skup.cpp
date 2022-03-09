#include "Skup.hpp"

Skup::Skup(){
    niz = new int[10];
    for(int i = 0; i < 10; ++i){
        niz[i] = 0;
    }
}

Skup::Skup(int *p, int n){
    niz = new int[10];
    for(int i = 0; i < 10; ++i){
        if(i < n){
            niz[i] = *(p+i);
        }else{
            niz[i] = 0;
        }
    }
}

Skup::Skup(const Skup &s){
    niz = new int[10];
    for(int i = 0; i < 10; ++i){
        niz[i] = s.niz[i];
    }
}

Skup::~Skup(){
    delete[] niz;
}

int Skup::sum()const{
    double s = 0;
    for(int i = 0; i < 10; ++i){
        s += niz[i];
    }
    return s;
}

Skup& Skup::operator=(const Skup &s){
    for(int i = 0; i < 10; ++i){
        niz[i] = s.niz[i];
    }
    return *this;
}

int& Skup::operator[](int i){
    return niz[i];
}

int Skup::operator[](int i)const{
    return niz[i];
}

Skup operator-(const Skup &s1, const Skup &s2){
    Skup s;
    int n = 0;
    bool pronadjen = false;

    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            if(s1.niz[i] == s2.niz[j] && !pronadjen){
                pronadjen = true;
            }
        }
        if(pronadjen && s1.niz[i] != 0){
            s.niz[n++] = s1.niz[i];
        }
        pronadjen = false;
    }

    for(int i = 0; i < 9; ++i){
        for(int j = i + 1; j < 10; ++j){
            if(s.niz[i] > s.niz[j] && s.niz[j] != 0){
                int temp = s.niz[i];
                s.niz[i] = s.niz[j];
                s.niz[j] = temp;
            }
        }
    }

    return s;

}

ostream& operator<<(ostream &out, const Skup &s){
    out << "{";
    for(int i = 0; i < 10; ++i){
        out << s.niz[i];
        if(i < 9){
            out << ", ";
        }
    }
    out << "}" << endl;

    return out;
}
