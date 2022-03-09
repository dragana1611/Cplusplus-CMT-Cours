#include <iostream>
using namespace std;

int main(){

    int donja_granica = 1;
    int gornja_granica = 10;

    for(int i = donja_granica; i <= gornja_granica; ++i){
        cout << i << " je ";
        if(i % 2 == 0){
            cout << "paran broj";
        }else{
            cout << "neparan broj";
        }
        cout << endl;
    }

    return 0;
}
