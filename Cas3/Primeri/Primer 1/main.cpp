#include <iostream>
using namespace std;

class Osoba{
    private:
        string ime, prezime;
        int godina;
    public:
        Osoba();
        Osoba(string, string, int);
        Osoba(const Osoba&);
        void predstaviSe();
};

Osoba::Osoba(){
    ime = "";
    prezime = "";
    godina = 0;
}

Osoba::Osoba(string i, string p, int g){
    ime = i;
    prezime = p;
    godina = g;
}

Osoba::Osoba(const Osoba &o){ //konstruktor kopije -> ucenik3 novi objekat sa istim vrednostima
    ime = o.ime;
    prezime = o.prezime;
    godina = o.godina;
}

void Osoba::predstaviSe(){
    cout << ime << " " << prezime << " " << godina << endl;
}

int main(){

    Osoba ucenik1;          // prazan konstruktor
    Osoba ucenik2, ucenik3; // prazan konstruktor

    ucenik1.predstaviSe();
    ucenik2.predstaviSe();
    ucenik3.predstaviSe();

    Osoba ucenik4("Marko", "Markovic", 16); // konstruktor sa parametrima
    Osoba ucenik5("Petar", "Tosic", 13), ucenik6("Ana", "Filipovic", 12);// konstruktor sa parametrima

    ucenik4.predstaviSe();
    ucenik5.predstaviSe();
    ucenik6.predstaviSe();

    Osoba ucenik7, ucenik8("Momir", "Milutinovic", 20); // parazan i sa parametrima konstruktor
    ucenik7.predstaviSe();
    ucenik8.predstaviSe();

    Osoba ucenik9(ucenik8);
    ucenik9.predstaviSe();

    Osoba ucenik10(ucenik4), ucenik11(ucenik8); // konstruktor kopij
    ucenik10.predstaviSe();
    ucenik11.predstaviSe();

    /*  NIJE DOZVOLJENO JER SU POLJA PRIVATE
    ucenik10.ime = "Nemanja";
    ucenik10.prezime = "Dugonjic";
    ucenik10.godina = 19;

    cout << ucenik10.ime << endl;

    */

    return 0;
}
