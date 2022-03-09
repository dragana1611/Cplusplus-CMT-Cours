#include "Pare.hpp"

Pare::Pare(){
    iznos = 0;
    valuta = RSD;
}

Pare::Pare(double i, Valute v){
    iznos = i;
    valuta = v;
}

Pare::Pare(const Pare &p){
    iznos = p.iznos;
    valuta = p.valuta;
}

Pare& Pare::operator=(const Pare &p){
    switch(valuta){
        case RSD:
            if(p.valuta == EUR){
                iznos = (p.iznos * 100);
            }else{ // RSD
                iznos = p.iznos;
            }
            break;
        case EUR:
            if(p.valuta == RSD){
                iznos = (p.iznos / 100);
            }else{ // EUR
                iznos = p.iznos;
            }
            break;
    }
    return *this;
}

Pare& Pare::operator+=(const Pare &p){
    switch(valuta){
        case RSD:
            if(p.valuta == EUR){
                iznos += (p.iznos * 100);
            }else{ // RSD
                iznos += p.iznos;
            }
            break;
        case EUR:
            if(p.valuta == RSD){
                iznos += (p.iznos / 100);
            }else{ // EUR
                iznos += p.iznos;
            }
            break;
    }
    return *this;
}

Pare& Pare::operator-=(const Pare &p){
    switch(valuta){
        case RSD:
            if(p.valuta == EUR){
                iznos -= (p.iznos * 100);
            }else{ // RSD
                iznos -= p.iznos;
            }
            break;
        case EUR:
            if(p.valuta == RSD){
                iznos -= (p.iznos / 100);
            }else{ // EUR
                iznos -= p.iznos;
            }
            break;
    }
    return *this;
}

Pare& Pare::operator++(){
    ++iznos;
    return *this;
}

Pare Pare::operator++(int i){
    Pare p(iznos,valuta);
    ++iznos;
    return p;
}

Pare& Pare::operator--(){
    --iznos;
    return *this;
}

Pare Pare::operator--(int i){
    Pare p(iznos,valuta);
    --iznos;
    return p;
}

Pare operator+(const Pare &p1, const Pare &p2){
    double iznos = p1.iznos;
    switch(p1.valuta){
        case RSD:
            if(p2.valuta == EUR){
                iznos += (p2.iznos * 100);
            }else{ // RSD
                iznos += p2.iznos;
            }
            break;
        case EUR:
            if(p2.valuta == RSD){
                iznos += (p2.iznos / 100);
            }else{ // EUR
                iznos += p2.iznos;
            }
            break;
    }
    Pare temp(iznos, p1.valuta);

    return temp;
}

Pare operator-(const Pare &p1, const Pare &p2){
    double iznos = p1.iznos;
    switch(p1.valuta){
        case RSD:
            if(p2.valuta == EUR){
                iznos -= (p2.iznos * 100);
            }else{ // RSD
                iznos -= p2.iznos;
            }
            break;
        case EUR:
            if(p2.valuta == RSD){
                iznos -= (p2.iznos / 100);
            }else{ // EUR
                iznos -= p2.iznos;
            }
            break;
    }
    Pare temp(iznos, p1.valuta);

    return temp;
}

bool operator==(const Pare &p1, const Pare &p2){
    bool jednaki = false;
    switch(p1.valuta){
        case RSD:
            if(p2.valuta == RSD && p1.iznos == p2.iznos ){
                jednaki = true;
            }else if(p1.iznos == (p2.iznos * 100) ){ // EUR
                jednaki = true;
            }
            break;
        case EUR:
            if(p2.valuta == EUR && p1.iznos == p2.iznos ){
                jednaki = true;
            }else if(p1.iznos == (p2.iznos / 100) ){ // RSD
                jednaki = true;
            }
            break;
    }
    return jednaki;
}

bool operator!=(const Pare &p1, const Pare &p2){
    return !(p1 == p2);
}

ostream& operator<<(ostream &out, const Pare &p){
    out << p.iznos << " ";
    switch(p.valuta){
        case RSD:
            cout << "RSD";
            break;
        case EUR:
            cout << "EUR";
            break;
    }
    return out;
}

istream& operator>>(istream &in, Pare &p){
    in >> p.iznos;
    return in;
}
