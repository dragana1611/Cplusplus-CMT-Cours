#include "Fudbaler.hpp"

int main(){
    Fudbaler fb1("Nemanja", "Milic", "Beograd", "Crvena Zvezda", 16, 2);
    fb1.predstaviSe();
    cout << endl;
    cout << "Ja sam " << fb1.getIme() << " " << fb1.getPrezime() << ", dolazim iz " << fb1.getGrad()
         << ", treniram u klubu " << fb1.getKlub() << ", moj broj dresa je " << fb1.getBrojNaDresu()
         << ", dao sam " << fb1.getBrojGolova() << " gola";

    return 0;
}
