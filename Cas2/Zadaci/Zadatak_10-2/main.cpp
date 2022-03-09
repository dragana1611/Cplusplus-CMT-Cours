#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main(){

    srand(time(0));

    int bubanj[7];
    int listic[7];

    int i, j, temp, postoji;

    for(i = 0; i < 7; ++i){
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

    for(i = 0; i < 7; ++i){
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
            }
        }
    }

    cout << "Unesite iznos uplate: ";
    int uplata;
    cin >> uplata;

    cout << "Bubanj: ";
    for(i = 0; i < 7; ++i){
        cout << bubanj[i] << " ";
    }
    cout << endl << "Listic: ";
    for(i = 0; i < 7; ++i){
        cout << listic[i] << " ";
    }

    int broj = 0;
    for(i = 0; i < 7; ++i){
        for(j = 0; j < 7; ++j){
            if(bubanj[i] == listic[j]){
                ++broj;
                break;
            }
        }
    }

    cout << endl << "Broj pogodjenih brojeva: " << broj << endl;
    cout << "Iznos dobitka je " << broj * uplata << endl;

    return 0;
}
