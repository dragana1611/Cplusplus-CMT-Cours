#include "Motor.hpp"


Motor::Motor(){
    stanje = ISKLJUCEN;
    nivoUlja = 10;
    nivoGoriva = 15;
    brzina = 0;
}

bool Motor::ukljuci(){
    bool uspesno = false;
    if(stanje == ISKLJUCEN){
        brzina += 10;
        nivoUlja -= 1;
        nivoGoriva -= 1;
        if(nivoUlja == 0){
            brzina = 0;
            stanje = POKVAREN;
        }else if(nivoUlja > 0 && nivoGoriva == 0){
            // OSTAJE ISKLJUCEN
        }else{
            stanje = UKLJUCEN;
        }
        uspesno = true;
    }
    return uspesno;
}

bool Motor::iskljuci(){
    bool uspesno = false;
    if(stanje == UKLJUCEN){
        stanje = ISKLJUCEN;
        brzina = 0;
        uspesno = true;
    }
    return uspesno;
}

bool Motor::popravi(){
    bool uspesno = false;
    if(stanje == POKVAREN){
        stanje = ISKLJUCEN;
        nivoUlja = 1;
        brzina = 0;
        uspesno = true;
    }
    return uspesno;
}

bool Motor::dodajGas(){
    bool uspesno = false;
    if(stanje == UKLJUCEN && brzina + 10 <= 120){
        brzina += 10;
        nivoUlja -= 1;
        nivoGoriva -= 1;
        if(nivoUlja == 0){
            brzina = 0;
            stanje = POKVAREN;
        }else if(nivoGoriva == 0){
            brzina = 0;
            stanje = ISKLJUCEN;
        }else{
            uspesno = true;
        }
    }
    return uspesno;
}

bool Motor::smanjiGas(){
    bool uspesno = false;
    if(stanje == UKLJUCEN && brzina - 10 >= 0){
        brzina -= 10;
        nivoUlja -= 1;
        nivoGoriva -= 1;
        if(nivoUlja == 0){
            brzina = 0;
            stanje = POKVAREN;
        }else if(nivoGoriva == 0){
            brzina = 0;
            stanje = ISKLJUCEN;
        }else{
            uspesno = true;
        }
    }
    return uspesno;
}

bool Motor::natociUlja(int u){
    bool uspesno = false;
    if(stanje == ISKLJUCEN && nivoUlja + u <= 20){
        nivoUlja += u;
        uspesno = true;
    }
    return uspesno;
}

bool Motor::natociGoriva(int g){
    bool uspesno = false;
    if(stanje == ISKLJUCEN && nivoGoriva + g <= 50){
        nivoGoriva += g;
        uspesno = true;
    }
    return uspesno;
}

StanjeMotora Motor::getStanje()const{
    return stanje;
}

int Motor::getNivoUlja()const{
    return nivoUlja;
}

int Motor::getNivoGoriva()const{
    return nivoGoriva;
}

int Motor::getBrzina()const{
    return brzina;
}

void prikazi(const Motor &m){
    cout << "Stanje: ";
    switch(m.getStanje()){
        case POKVAREN:
            cout << "POKVAREN";
            break;
        case ISKLJUCEN:
            cout << "ISKLJUCEN";
            break;
        case UKLJUCEN:
            cout << "UKLJUCEN";
            break;
    }
    cout << endl;
    cout << "\tBrzina: " << m.getBrzina() << endl;
    cout << "\tNivo ulja: " << m.getNivoUlja() << endl;
    cout << "\tNivo goriva: " << m.getNivoGoriva();

}
