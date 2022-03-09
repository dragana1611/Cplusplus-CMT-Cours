#include <iostream>
using namespace std;

int main(){

    int  *p = new int(5); // kreira se dinamicki objekat tipa int i inicijalzuje sa 5
    cout << (*p);

    delete p;

    return 0;
}
