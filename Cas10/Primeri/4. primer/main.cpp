#include <iostream>
using namespace std;

int saberi (int x, int y){
	return x + y;
}

int saberi (int x, int y, int z){
	return x + y + z;
}

int main(){

    int rezultat1 = saberi (2, 6); // saberi (int, int)
    double rezultat2 = saberi (2, 6, 10);// saberi (int, int, int)

    cout << rezultat1 << endl;
    cout << rezultat2 << endl;

    return 0;
}
