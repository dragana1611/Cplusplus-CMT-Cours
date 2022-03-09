#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int upisaniBroj;
    int brojac = 1;

    do{
        cout << "Unesite " << brojac++ << ". broj: ";
        cin >> upisaniBroj;
        suma += upisaniBroj;
    }while(upisaniBroj != 0);

    cout << "Suma iznosi: " << suma << endl;


    return 0;
}
