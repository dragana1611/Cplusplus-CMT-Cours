#include <iostream>
using namespace std;

#include "A.hpp"

int main(){

    A a1;
    cout << "a1 -> x= " << a1.getX() << ", instanci= " << a1.getInstanci() << endl;

    A a2(2);
    cout << "a2 -> x= " << a2.getX() << ", instanci= " << a2.getInstanci() << endl;

    A a3(a1);
    cout << "a3 -> x= " << a3.getX() << ", instanci= " << a3.getInstanci() << endl;

    {
        A a1;
        cout << "a4 -> x= " << a1.getX() << ", instanci= " << a1.getInstanci() << endl;
    }

    cout << "a1 -> x= " << a1.getX() << ", instanci= " << a1.getInstanci() << endl;
    cout << "a2 -> x= " << a2.getX() << ", instanci= " << a2.getInstanci() << endl;
    cout << "a3 -> x= " << a3.getX() << ", instanci= " << a3.getInstanci() << endl;

    return 0;
}
