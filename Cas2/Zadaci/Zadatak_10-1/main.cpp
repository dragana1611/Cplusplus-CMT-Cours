#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>

#define DUZINA 7

int main(){

    srand(time(0));

    int bubanj[DUZINA];
    int listic[DUZINA];

    int i, j, temp, postoji;

    for(i = 0; i < DUZINA; ++i){
        temp = rand() % 38 + 1;
        postoji = 0;
        for(j = 0; j < i; ++j){
            if(temp == bubanj[j]){
                postoji = 1;
                --i;
                break;
            }
        }
        if(postoji == 0){
            bubanj[i] = temp;
        }
    }

    cout << "Drzavna lutrija Srbije: Loto 1/38" << endl;
    for(i = 0; i < DUZINA; ++i){
        cout << "Zaokruzite " << i + 1 << ". broj: ";
        cin >> temp;

        if(temp < 1 || temp > 38){
            --i;
            cout << "\tBroj koji zelite da zaokruzite ne postoji na listicu." << endl;
        }else{
            postoji = 0;
            for(j = 0; j < i; ++j){
                if(temp == listic[j]){
                    postoji = 1;
                    --i;
                    cout << "\tSvi zaokruzeni brojevi moraju da budu jedinstveni. Pokusajte ponovo." << endl;
                    break;
                }
            }
            if(postoji == 0){
                listic[i] = temp;
                system("cls");
                cout << "Drzavna lutrija Srbije: Loto 1/38" << endl;
            }
        }
    }

    cout << "Unesite iznos uplate: ";
    int uplata;
    cin >> uplata;
    system("cls");


    cout << "Drzavna lutrija Srbije: Loto 1/38" << endl;
    cout << "Bubanj: ";
    for(i = 0; i < DUZINA; ++i){
        cout << bubanj[i] << " ";
    }
    cout << endl << "Listic: ";
    for(i = 0; i < DUZINA; ++i){
        cout << listic[i] << " ";
    }

    cout << endl << "Uplaceno: " << uplata << " rsd" << endl;

    int broj = 0;
    for(i = 0; i < DUZINA; ++i){
        for(j = 0; j < DUZINA; ++j){
            if(bubanj[i] == listic[j]){
                ++broj;
                break;
            }
        }
    }
    cout << "Pogodjeno: " << broj << endl;
    cout << "Iznos dobitka je " << broj * uplata << " rsd" << endl;

    return 0;
}
