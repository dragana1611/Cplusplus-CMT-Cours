#include <iostream>
using namespace std;

int main(){

    int godina;
    cout << "Unesite koliko imate godina: ";
    cin >> godina ;


    if(godina > 0 && godina < 18){
        cout << "Vi ste maloletna osoba" << endl;
    }else if(godina >= 18){
        cout << "Vi ste punoletna osoba" << endl;
    }else{
        cout << "Jos uvek se niste rodili" << endl;
    }

    return 0;
}
