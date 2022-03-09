#include <iostream>
using namespace std;

class Osnovna{
    public:
        virtual ~Osnovna(){
            cout << "Destruktor osnovne" << endl;
        };
};

class Izvedena : public Osnovna{
    public:
        ~Izvedena(){
            cout << "Destruktor izvedene" << endl;
        };
};

void oslobodi(Osnovna *pok){
    delete pok;
}

int main(){

    Osnovna *os = new Osnovna();
    Izvedena *iz = new Izvedena();

    oslobodi(os); // poziva se destruktor osnovne
    oslobodi(iz); // poziva se destruktor izvedene

    return 0;
}
