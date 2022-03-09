#include <iostream>
using namespace std;

int main(){

    cout << "Unesite stranice a i b pravougaonika: ";
    int a, b;
    cin >> a >> b;

    cout << "Povrsina je " << a * b << "m2 +, a obim" << 2 * a + 2 * b << "m" << endl;

    return 0;
}
