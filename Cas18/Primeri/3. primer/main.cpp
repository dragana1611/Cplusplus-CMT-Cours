#include <iostream>
using namespace std;

class Figura{
    public:
        void prikazi(){
            cout << "Figura" << endl;
        };
};

class Pravougaonik : public Figura{
    protected:
        int a, b;
    public:
        Pravougaonik(int aa, int bb){
            a = aa;
            b = bb;
        }
        void prikazi(){
            cout << "Pravougaonik " << a << "x" << b << endl;
        }
};

class Kocka : public Pravougaonik{
    public:
        Kocka(int aa) : Pravougaonik(aa, aa){
            // TELO
        }
        void prikazi(){
            cout << "Kocka " << a << "x" << b << endl;
        }
};

int main(){

    Figura *f;
    Pravougaonik p1(2, 5);
    Kocka k1(3);

    f = &p1;
    f -> prikazi();

    f = &k1;
    f -> prikazi();

    return 0;
}
