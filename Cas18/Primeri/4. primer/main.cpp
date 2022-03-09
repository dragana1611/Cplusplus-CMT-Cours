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

    Figura **f = new Figura*[6];
    Pravougaonik p1(2, 5);
    Pravougaonik p2(4, 8);
    Pravougaonik p3(6, 1);
    Kocka k1(3);
    Kocka k2(5);
    Kocka k3(7);

    f[0] = &p1;
    f[1] = &k1;
    f[2] = &p2;
    f[3] = &k2;
    f[4] = &p3;
    f[5] = &k3;

    for(int i = 0; i < 6; ++i){
        f[i] -> prikazi();
    }

    delete[] f;

    return 0;
}
