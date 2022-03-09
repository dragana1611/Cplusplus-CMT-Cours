#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(){ a = 1; }
        A(const A &param){ a = param.a; }
        int getA()const { return a; }
};

int main(){

    A a1;
    A a2(a1);
    cout << a1.getA() << endl;
    cout << a2.getA() << endl;

    return 0;
}
