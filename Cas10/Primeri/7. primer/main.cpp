#include <iostream>
using namespace std;

class A{
    int x;
    public:
        A(){ x = 1; }
        int getX()const{
            return x;
        }
};

void ispisi(const A &a){
    cout << a.getX() << endl;
    // cout << a.x << endl; GRESKA int A::x je privatno
}

int main(){

    A a1;
    ispisi(a1);

    return 0;
}
