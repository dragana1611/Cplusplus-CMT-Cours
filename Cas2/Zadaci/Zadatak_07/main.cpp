#include <iostream>
using namespace std;

#include <iomanip>

int main(){

    int n;

    cout << "Unesite velicinu: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << setw(n) << i * j;
        }
        cout << endl;
    }

    return 0;
}
