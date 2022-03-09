#include <iostream>
using namespace std;

int main(){

    int *niz = new int[5];  // kreira se dinamicki objekat od 5 intova
    for(int i = 0; i < 5; ++i){
        niz[i] = i;
        //*(niz + i) = 0;
    }

    for(int i = 0; i < 5; ++i){
        cout << niz[i];
    }

    delete[] niz;

    return 0;
}
