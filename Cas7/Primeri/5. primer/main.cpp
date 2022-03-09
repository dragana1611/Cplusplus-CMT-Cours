#include <iostream>
using namespace std;

int& f(int &i){
    return i;
}

int main(){

    int x = 0;
    cout << x << endl;
    f(x) = 1;
    cout << x << endl;

    return 0;
}
