#include <iostream>
using namespace std;

int main(){

    cout << "Upisite broj za koji treba izracunati faktorijel: ";
    int broj;
    cin >> broj;

    int faktorijel = 1;
    for(int i = 2; i <= broj; ++i){ //i krece od 2 jer je definisano sa 1
        faktorijel *= i;
    }

    cout << "Faktorijel broja " << broj << " je " << faktorijel << endl;

    return 0;
}
