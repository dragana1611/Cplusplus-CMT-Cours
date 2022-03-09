#include <iostream>
using namespace std;

int saberi(int br1, int br2){
    return br1 + br2;
}

double saberi(double br1, double br2){
    return br1 + br2;
}

int main(){

    int i1 = 10;
    int i2 = 20;

    double d1 = 2.54;
    double d2 = 3.78;

    cout << saberi(i1, i2) << endl; // predefinisane funkcije imaju isto ime,
    cout << saberi(d1, d2) << endl; // ali razlicite tipove argumenata


    return 0;
}
