#include <iostream>

using namespace std;

int main()
{

    int donja_granica = 0;
    int gornja_granica = 300;
    int korak = 20;

    for(int i = donja_granica; i <= gornja_granica; i += korak){
        cout << i << "C je " << i * 1.8 + 32 << "F " << endl;
    }

    return 0;
}
