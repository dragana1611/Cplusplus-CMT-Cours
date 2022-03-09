#include <iostream>
using namespace std;
#include <cstdlib>

int sumaParnih(int *p, int duzina){
    int temp = 0;
    for(int i = 0; i < duzina; ++i){
        temp += p[i];
    }
    return temp;
}

int main(){

    int n;
    cout << "Unesite duzinu niza: ";
    cin >> n;

    int nizBrojeva[n], parnih = 0;
    for(int i = 0; i < n; ++i){
        cout << "nizBrojeva[" << i << "]= ";
        cin >> nizBrojeva[i];
        if(nizBrojeva[i] % 2 == 0){
            ++parnih;
        }
    }
    system("cls");

    int nizParnih[parnih];
    int j = 0;
    cout << "Uneti brojevi su: ";
    for(int i = 0; i < n; ++i){
        cout << nizBrojeva[i] << " ";
        if(nizBrojeva[i] % 2 == 0){
            nizParnih[j] = nizBrojeva[i];
            ++j;
        }
    }

    cout << endl << "Parni brojevi su: ";
    for(int i = 0; i < j; ++i){
        cout << nizParnih[i] << " ";
    }

    int suma = sumaParnih(nizParnih, j);
    cout << endl << "Suma parnih brojeva je: " << suma << endl;

    return 0;
}
