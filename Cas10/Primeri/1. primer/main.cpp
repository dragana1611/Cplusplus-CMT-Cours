#include <iostream>
using namespace std;

int saberi (int x, int y){
	return x + y;
}

int main(){

    int rezultat1 = saberi (2, 6); // rezultat je u redu
    int rezultat2 = saberi (3.8, 7.1);// rezultat nije u redu

    cout << rezultat1 << endl;
    cout << rezultat2 << endl;

    return 0;
}
