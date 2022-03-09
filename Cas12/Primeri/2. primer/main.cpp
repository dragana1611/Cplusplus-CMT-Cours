#include <iostream>
using namespace std;


int main()
{
    char *poslovnoIme = "Centar za mlade talente";
    poslovnoIme += 10;
    char temp1 = poslovnoIme[-3];
    char temp2 = poslovnoIme[-2];

    cout << temp1 << temp2 << endl;

    return 0;
}
