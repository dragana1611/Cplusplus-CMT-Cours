#include <iostream>
using namespace std;

int main(){

    int i1 = 10;
    int i2 = 20;

    string s1 = "Pera";
    string s2 = " Peric";

    cout << i1 + i2 << endl; // Polimorfizam na delu
    cout << s1 + s2 << endl; // isti operator radi razlicite stvari u zavisnosti
                             // od tipova objekata

    return 0;
}
