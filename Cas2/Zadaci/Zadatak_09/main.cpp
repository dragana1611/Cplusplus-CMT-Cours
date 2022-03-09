#include <iostream>
using namespace std;
#include <cstdlib>

enum Valute{RSD = 1, EUR};

struct Uplata{
    double iznos;
    Valute valuta;
};

int main(){

    int brojUplata;
    cout << "Koliko uplata: ";
    cin >> brojUplata;

    Uplata uplate[brojUplata];

    for(int i = 0; i < brojUplata; ++i){
        cout << i + 1 << ". uplata" << endl;
        cout << "\tIznos: ";
        cin >> uplate[i].iznos;
        cout << "\tValuta (1 - RSD, 2 - EUR): ";
        int izbor;
        cin >> izbor;
        while(izbor < 1 || izbor > 2){
            cout << "\tIzabrali ste nepostojecu valutu. Unesite ponovo!" << endl;
            cout << "\tValuta (1 - RSD, 2 - EUR): ";
            cin >> izbor;
        }
        switch(izbor){
            case RSD:
                uplate[i].valuta = RSD;
                break;
            case EUR:
                uplate[i].valuta = EUR;
                break;
        }
    }

    system("cls");

    cout << "Primljene su uplate:" << endl;
    for(int i = 0; i < brojUplata; ++i){
        cout << "\t" << i + 1 << ". uplata: " << uplate[i].iznos;
        switch(uplate[i].valuta){
            case RSD:
                cout << " rsd";
                break;
            case EUR:
                cout << " eur";
                break;
        }
        cout << endl;
    }

    int idNajveceUplate = 0;
    for(int i = 1; i < brojUplata; ++i){
        if( (uplate[idNajveceUplate].valuta == RSD && uplate[i].valuta == EUR) && (uplate[idNajveceUplate].iznos < (uplate[i].iznos * 120))){
            idNajveceUplate = i;
        }else if( (uplate[idNajveceUplate].valuta == EUR && uplate[i].valuta == RSD) && (uplate[idNajveceUplate].iznos < (uplate[i].iznos / 120))){
            idNajveceUplate = i;
        }else if(uplate[idNajveceUplate].iznos < uplate[i].iznos){
            idNajveceUplate = i;
        }
    }

    cout << "Najveca je " << idNajveceUplate + 1 << ". uplata" << endl;


    return 0;
}
