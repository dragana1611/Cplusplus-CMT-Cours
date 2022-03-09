#include <iostream>
using namespace std;

int zbir(int x, int y){
	return x + y;
}

int razlika(int *x, int *y){
    return (*x) - (*y);
}

int proizvod(int &x, int &y){
    return x * y;
}

int main(){

    int a = 4;
    int b = 2;

    cout << zbir(a, b) << endl;
    cout << razlika(&a, &b) << endl;
    cout << proizvod(a, b) << endl;

    return 0;
}
