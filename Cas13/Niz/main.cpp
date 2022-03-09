#include <iostream>

using namespace std;

class NizBrojeva{
private:
    int *pok;
public:
    NizBrojeva(int *, int);
    NizBrojeva& operator-=(const NizBrojeva &);
    friend NizBrojeva operator+(const NizBrojeva &, const NizBrojeva &);
    friend ostream& operator<<(ostream &, const NizBrojeva &);
};

NizBrojeva::NizBrojeva(int *arr, int len){
    pok = new int[5];
    for(int i=0; (i<len) || (i<5); i++){
        if(i<len){
            pok[i]=arr[i];
        }
        else{
            pok[i]=0;
        }
    }
}

NizBrojeva& NizBrojeva::operator-=(const NizBrojeva &nb){
    for(int i=0; i<5; i++){
        pok[i]-=nb.pok[i];
    }
    return *this;
}

NizBrojeva operator+(const NizBrojeva &nb1, const NizBrojeva &nb2){
    NizBrojeva temp(nb1.pok, 5);
    for(int i=0; i<5; i++){
        if(nb1.pok[i]==nb2.pok[i]){
            temp.pok[i]=1;
        }
        else{
            temp.pok[i]=0;
        }
    }
    return temp;
}

ostream& operator<<(ostream &out, const NizBrojeva &nb){
    for(int i=0; i<5; i++){
        out << nb.pok[i] << " ";
    }
    return out;
}

int main()
{
    int niz1[5] = {3, 5, 6, 8, 9};
    int niz2[5] = {5, 2, 6, 0, 9};

    NizBrojeva nb1(niz1, 3);
    NizBrojeva nb2(niz2, 5);

    cout<< "nb1 "<<endl;
    cout<< nb1<<endl<<endl;

    cout<< "nb2 "<<endl;
    cout<< nb2<<endl<<endl;

    cout<< "nb1 -= nb2 "<<endl;
    nb1 -= nb2;
    cout<< nb1<<endl<<endl;

    cout<< "nb1 + nb2 "<<endl;
    cout<< (nb1+nb2)<<endl;

    return 0;
}
