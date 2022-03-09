#include <iostream>
using namespace std;

void f1(){
    int i1 = 0;
    cout << i1;
    ++i1;
}

void f2(){
    int i2 = 1;
    // i1 = 2;
}

int i3 = 3;

int main(){
    f1();
    f2();
    cout << i3;
    f1();
    f2();
    cout << i3;
    // cout << i1;
    // cout << i2;

    return 0;
}
