#include "NizPravougaonika.hpp"

NizPravougaonika::NizPravougaonika(){
    broj = 0;
    elementi = NULL;
}

NizPravougaonika::NizPravougaonika(int br, Pravougaonik np[]){
    broj = br;
    elementi = new Pravougaonik[broj];
    for(int i = 0; i < broj; ++i){
        elementi[i] = np[i];
    }
}

NizPravougaonika::NizPravougaonika(const NizPravougaonika &np){
    broj = np.broj;
    elementi = new Pravougaonik[broj];
    for(int i = 0; i < broj; ++i){
        elementi[i] = np.elementi[i];
    }
}

NizPravougaonika::~NizPravougaonika(){
    delete[] elementi;
}

int NizPravougaonika::duzina() const{
    return broj;
}

Pravougaonik& NizPravougaonika::operator[](int i){
    return elementi[i];
}

Pravougaonik NizPravougaonika::operator[](int i) const{
    return elementi[i];
}

NizPravougaonika& NizPravougaonika::operator=(const NizPravougaonika &np){
    if (this != &np){
        delete[] elementi;
        broj = np.broj;
        elementi = new Pravougaonik[broj];
        for (int i = 0; i < broj; ++i){
            elementi[i] = np.elementi[i];
        }
    }
    return *this;
}

NizPravougaonika& NizPravougaonika::operator+=(const NizPravougaonika &np){

    Pravougaonik *temp = new Pravougaonik[broj + np.broj];

    int i;
    for (i = 0; i < broj; ++i){
        temp[i] = elementi[i];
    }

    for (i = 0; i < np.broj; i++){
        temp[broj + i] = np.elementi[i];
    }

    broj += np.broj;
    delete[] elementi;
    elementi = temp;

    return *this;
}

bool operator==(const NizPravougaonika &np1, const NizPravougaonika &np2){
    if (np1.broj != np2.broj){
        return false;
    }
    for (int i = 0; i < np1.broj; ++i){
        if (np1.elementi[i].a != np2.elementi[i].a && np1.elementi[i].b != np2.elementi[i].b ){
            return false;
        }
    }
    return true;
}

bool operator!=(const NizPravougaonika &np1, const NizPravougaonika &np2){
    if (np1.broj != np2.broj){
        return true;
    }
    for (int i = 0; i < np1.broj; ++i){
        if (np1.elementi[i].a != np2.elementi[i].a && np1.elementi[i].b != np2.elementi[i].b ){
            return true;
        }
    }
    return false;
}

NizPravougaonika operator+(const NizPravougaonika &np1, const NizPravougaonika &np2){

    Pravougaonik *temp = new Pravougaonik[np1.broj + np2.broj];
    int i;
    for (i = 0; i < np1.broj; ++i){
        temp[i] = np1.elementi[i];
    }

    for (i = 0; i < np2.broj; i++){
        temp[np1.broj + i] = np2.elementi[i];
    }

    NizPravougaonika tempNP(np1.broj + np2.broj, temp);

    return tempNP;
}

ostream& operator<<(ostream &out, const NizPravougaonika &np){
    if(np.broj > 0){
        for(int i = 0; i < np.broj; ++i){
            out << np.elementi[i].a << " " << np.elementi[i].b << endl;
        }
    }
    return out;
}
