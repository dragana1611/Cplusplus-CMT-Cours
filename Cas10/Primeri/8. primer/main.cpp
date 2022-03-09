#include <iostream>
using namespace std;

class A{
    int x;
    public:
        A(){ x = 1; }
        int getX()const{
            return x;
        }
        friend void ispisi(const A &);
};

void ispisi(const A &a){
    cout << a.getX() << endl;
    cout << a.x << endl; // sada nije greska jer je ispisi() proglaseno za prijatelja klase
}

int main(){

    A a1;
    ispisi(a1);

    return 0;
}
