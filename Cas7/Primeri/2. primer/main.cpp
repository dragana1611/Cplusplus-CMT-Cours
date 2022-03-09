#include <iostream>
using namespace std;

void f1(int a){
    a = 1;
}

void f2(int *a){
    *a = 2;
}

void f3(int &a){
    a = 3;
}

int main(){

    int a = 0;

    cout << a << endl;
    f2(&a);
    cout << a << endl;
    f1(a);
    cout << a << endl;
    f3(a);
    cout << a << endl;

    return 0;
}
