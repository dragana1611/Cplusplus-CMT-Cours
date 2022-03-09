#include "Televizor.hpp"


Televizor::Televizor()
{
    stanje = ISKLJUCEN;
    kanal = KANAL_MIN;
    zvuk = ZVUK_MIN;
}

Televizor::Televizor(const Televizor &t)
{
    stanje = t.stanje;
    kanal = t.kanal;
    zvuk = t.zvuk;
}

bool Televizor::iskljuci(){
    bool uspesno = false;
    if (stanje == UKLJUCEN){
        stanje = ISKLJUCEN;
        uspesno = true;
    }
    return uspesno;
}

bool Televizor::ukljuci(){
    bool uspesno = false;
    if (stanje ==  ISKLJUCEN){ //  ako je stanje iskljucen
        stanje = UKLJUCEN; // vrati na stanje ukljucen
        uspesno = true;
    }
    return uspesno;
}

bool Televizor::sledeciKanal(){
    bool uspesno = false;
    if (stanje == UKLJUCEN){
        kanal++;
        if(kanal > KANAL_MAX)
        {
            kanal=KANAL_MIN;
        }
        uspesno = true;
    }
    return uspesno;
}
bool Televizor::prethodniKanal()
{
    bool uspesno = false;
    if (stanje == UKLJUCEN){
        kanal--;
        if(kanal < KANAL_MIN)
        {
            kanal=KANAL_MAX;
        }
        uspesno = true;
    }
    return uspesno;
}
bool Televizor::pojacajZvuk()
{
    bool uspesno = false;
    if (stanje == UKLJUCEN){
        zvuk++;
        if(zvuk > ZVUK_MAX)
        {
            zvuk = ZVUK_MAX;
            uspesno = false;
        }
        else
            {
                uspesno = true;
            }

    }
    return uspesno;
}
bool Televizor::smanjiZvuk()
{
    bool uspesno = false;
    if (stanje == UKLJUCEN){
        zvuk--;
        if(zvuk < ZVUK_MIN)
        {
            zvuk = ZVUK_MIN;
            uspesno = false;
        }
        else
            {
                uspesno = true;
            }

    }
    return uspesno;
}
void Televizor::prikazi()const
{
    cout << "STANJE:";
    switch (stanje)
    {
    case ISKLJUCEN:
        cout << "Iskljucen";
        break;

    case UKLJUCEN:
        cout << "Ukljucen";
        break;
    }
    cout << endl;
    cout << "KANAL: " << kanal << endl;
    cout << "JACINA: " << zvuk << endl;
}
