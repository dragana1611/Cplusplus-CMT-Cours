#include <iostream>
using namespace std;

#include <cstdlib> // deklarisana funkcija rand

int getSlucajanBroj(){
	return rand() % 10 + 1;
}

double getSlucajanBroj(){  // greska, redeklaracija
	return rand() % 10 + 1;
}

int main(){

    int prviBroj = getSlucajanBroj();
    int drugiBroj = getSlucajanBroj();

    cout << prviBroj << endl;
    cout << drugiBroj << endl;

    return 0;
}
