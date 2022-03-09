#include <iostream>
using namespace std;

int main(){

    int i = 1;
    int &j = i;
    i = 3;
    j = 4;
    int *p = &j;
    j += 1;
    int k = j;
    int m = *p;

    return 0;
}
