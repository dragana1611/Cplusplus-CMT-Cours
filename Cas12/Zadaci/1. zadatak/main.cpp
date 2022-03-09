#include "Skup.hpp"


int main()
{
    int niz1[] = {9, 2, 6, 2, 8};
    int niz2[] = {0, 0, 5, 0, 2, 0, 0, 9, 0, 8};

    Skup s1, s2(niz1, 5), s3(niz2, 10), s4(s3), s5(s4);

    cout << "S1: " << s1;
    cout << "S2: " << s2;
    cout << "S3: " << s3;
    cout << "S4: " << s4 << endl;

    cout << "S1-S2: " << s1 - s2;
    cout << "S2-S3: " << s2 - s3;
    cout << "S3-S4: " << s3 - s4 << endl;

    cout << "S1 = s2" << endl;
    cout << "S1: " << s1;
    cout << "S2: " << s2;
    s1 = s2;
    cout << "s1: " << s1 << endl;

    cout << "s1[0] = " << s1[0] << endl;
    cout << "s1[1] = " << s1[1] << endl;
    cout << "s1[2] = " << s1[2] << endl;
    cout << "s1[3] = " << s1[3] << endl << endl;

    cout << "s1[0] = 10" << endl;
    cout << "s1[1] = 20" << endl;
    cout << "s1[2] = 30" << endl;
    cout << "s1[3] = 40" << endl << endl;

    s1[0] = 10;
    s1[1] = 20;
    s1[2] = 30;
    s1[3] = 40;

    cout << "s1[0] = " << s1[0] << endl;
    cout << "s1[1] = " << s1[1] << endl;
    cout << "s1[2] = " << s1[2] << endl;
    cout << "s1[3] = " << s1[3] << endl << endl;

    return 0;
}
