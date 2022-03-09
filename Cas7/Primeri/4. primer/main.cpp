#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(){ a = 1; }
        int getA()const{ return a; }
        void setA(int val){ a = val; }
};

class B{
    private:
        A &r;
    public:
        B(A &param) : r(param) {}
        A getR()const{ return r; }
};

int main(){

    A a;
    B b(a);

    cout << a.getA() << endl;
    cout << b.getR().getA() << endl;
    a.setA(10);
    cout << a.getA() << endl;
    cout << b.getR().getA() << endl;

    return 0;
}
