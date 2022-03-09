#include <iostream>
using namespace std;

int saberi (int x, int y){
	return x + y;
}

double saberi (double x, double y){
	return x + y;
}

int main(){

    int rezultat1 = saberi (2, 6); // poziva saberi (int, int)
    double rezultat2 = saberi (3.8, 7.1);// poziva saberi (double, double)

    cout << rezultat1 << endl;
    cout << rezultat2 << endl;

    return 0;
}
