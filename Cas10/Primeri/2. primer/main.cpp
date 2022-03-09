#include <iostream>
using namespace std;

int saberiInt (int x, int y){
	return x + y;
}

double saberiDouble (double x, double y){
	return x + y;
}

int main(){

    int rezultat1 = saberiInt (2, 6); // rezultat je u redu
    double rezultat2 = saberiDouble (3.8, 7.1);// rezultat je u redu

    cout << rezultat1 << endl;
    cout << rezultat2 << endl;

    return 0;
}
