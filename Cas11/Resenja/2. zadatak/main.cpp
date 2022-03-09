#include <iostream>
using namespace std;

#define CENA_SMS 2.54

struct Poruka{
    string broj;
    string tekst;
    bool poslata;
};

class Mobilni{
    private:
        int memorija;
        double kredit;
        Poruka **poruke;
    public:
        Mobilni(int prostor, double dopuna);
        ~Mobilni();
        int kapacitet()const; // ukupno mesta
        int prostor()const; // neiskoriscena mesta
        int zauzeto()const; // iskoriscena mesta
        bool dopunaKredita(double iznosDopune);
        bool dodajSms(string brojPrimaoca, string tekstPoruke);  // dodaje novu poruku ukoliko mobilni ima prostora
        bool dodajSms(Poruka novaPoruka);  // dodaje novu poruku ukoliko mobilni ima prostora
        bool obrisiSms(); // brise sve sms-ove
        bool obrisiSms(string brojPrimaoca); // brise sve sms-ove ciji broj odgovara prosledjenom broju
        bool obrisiSms(string brojPrimaoca, string tekstPoruke); // brise samo sms ciji broj i tekst odgovara prosledjenom broju i tekstu
        bool azurirajSms(string brojPrimaoca, string noviTekst);  // azurira tekst svih sms-ova ciji broj odgovara prosledjenom broju, drugi parametar je novi tekst
        bool azurirajSms(string brojPrimaoca, string stariTekst, string noviTekst); // //azuirira samo tekst sms-a ciji broj i tekst odgovara prosledjenom broju i tekstu, trevi parametar je novi tekst
        bool posaljiSms();  // salje sve poruke koje nisu poslane ako telefon ima dovoljno kredita
        bool posaljiSMs(string brojPrimaoca); // salje sve poruke primaoca ako telefon ima dovoljno kredita
        friend ostream& operator<<(ostream &out, const Mobilni &mobilniTelefon);
};

Mobilni::Mobilni(int prostor, double dopuna){
    if(prostor < 0){
        memorija = 0;
    }else{
        memorija = prostor;
    }

    if(dopuna < 0){
        kredit = 0;
    }else{
        kredit = dopuna;
    }

    // Moze se napisati i upotrebom ternarnog operatora   ? :
    // (prostor < 0) ? memorija = 0 : memorija = prostor;
    // (dopuna < 0) ? kredit = 0 : memorija = kredit;

    poruke = new Poruka*[memorija]; // dinamicka alokacija za prvu dimenziju, niz memorijskih adresa na kojima se nalaze sadrzaji tipa strukture Poruka
    for(int i = 0; i < memorija; ++i){
        poruke[i] = NULL;
    }
}

Mobilni::~Mobilni(){
    for(int i = 0; i < memorija; ++i){
        delete poruke[i] ;
        poruke[i] = NULL;
    }
    delete[] poruke;
    poruke = NULL;
}

int Mobilni::kapacitet()const{
    return memorija;
}

int Mobilni::prostor()const{
    int br = 0;
    for(int i = 0; i < memorija; ++i){
        if(poruke[i] == NULL){
            ++br;
        }
    }
    return br;
}

int Mobilni::zauzeto()const{
    int br = 0;
    for(int i = 0; i < memorija; ++i){
        if(poruke[i] != NULL){
            ++br;
        }
    }
    return br;
}

bool Mobilni::dopunaKredita(double iznosDopune){
    bool uspesno = false;
    if(kredit + iznosDopune >= 0){ // ne sme se dozvoliti odlazak u minus
        kredit += iznosDopune;
        uspesno = true;
    }

    return uspesno;
}

bool Mobilni::dodajSms(string brojPrimaioca, string tekstPoruke){
    bool uspesno = false;
    if(prostor() <= kapacitet()){
        for(int i = 0; i < memorija; ++i){ // moze i kapacitet(), skuplja operacija
            if(poruke[i] == NULL){
                poruke[i] = new Poruka;
                Poruka temp = {brojPrimaioca, tekstPoruke, false};
                *poruke[i] = temp;
                uspesno = true;
                break;
            }
        }
    }
    return uspesno;
}

bool Mobilni::dodajSms(Poruka novaPoruka){
    bool uspesno = false;
    if(prostor() <= kapacitet()){
        for(int i = 0; i < memorija; ++i){ // moze i kapacitet(), skuplja operacija
            if(poruke[i] == NULL){
                poruke[i] = new Poruka;
                *poruke[i] = novaPoruka;
                uspesno = true;
                break;
            }
        }
    }
    return uspesno;
}

bool Mobilni::obrisiSms(){
    bool uspesno = false;
        for(int i = 0; i < memorija; ++i){
            if(poruke[i] != NULL){
                delete poruke[i];
                poruke[i] = NULL;
                uspesno = true;
            }
        }
    return uspesno;
}

bool Mobilni::obrisiSms(string brojPrimaoca){
    bool uspesno = false;
        for(int i = 0; i < memorija; ++i){
            if(poruke[i] != NULL && poruke[i] -> broj == brojPrimaoca){
                delete poruke[i];
                poruke[i] = NULL;
                uspesno = true;
            }
        }
    return uspesno;
}

bool Mobilni::obrisiSms(string brojPrimaoca, string tekstPoruke){
    bool uspesno = false;
    for(int i = 0; i < memorija; ++i){
        if((poruke[i] != NULL) && (poruke[i] -> broj == brojPrimaoca) && (poruke[i] -> tekst == tekstPoruke)){
            delete poruke[i];
            poruke[i] = NULL;
            uspesno = true;
            break;
        }
    }
    return uspesno;
}

bool Mobilni::azurirajSms(string brojPrimaoca, string noviTekst){
    bool uspesno = false;
    for(int i = 0; i < memorija; ++i){
        if((poruke[i] != NULL) && (poruke[i] -> broj == brojPrimaoca)){
            Poruka *temp = poruke[i];
            temp -> tekst = noviTekst;
            uspesno = true;
        }
    }
    return uspesno;
}


bool Mobilni::azurirajSms(string brojPrimaoca, string stariTekst, string noviTekst){
    bool uspesno = false;
    for(int i = 0; i < memorija; ++i){
        if((poruke[i] != NULL) && (poruke[i] -> broj == brojPrimaoca) && (poruke[i] -> tekst == stariTekst)){
            Poruka *temp = poruke[i];
            temp -> tekst = noviTekst;
            uspesno = true;
            break;
        }
    }
    return uspesno;
}

bool Mobilni::posaljiSms(){
    bool uspesno = false;
    if(zauzeto() > 0){
        int br = 0;
        for(int i = 0; i < memorija; ++i){
            if((poruke[i] != NULL) && (poruke[i] -> poslata == false) ){
                ++br;
            }
        }
        if(kredit >= (br * CENA_SMS)){
            kredit -= (br * CENA_SMS);
            for(int i = 0; i < memorija; ++i){
                if((poruke[i] != NULL) && (poruke[i] -> poslata == false) ){
                    Poruka *temp = poruke[i];
                    temp -> poslata = true;
                    uspesno = true;
                }
            }
        }
    }
    return uspesno;
}

bool Mobilni::posaljiSMs(string brojPrimaoca){
    bool uspesno = false;
    if(zauzeto() > 0){
        int br = 0;
        for(int i = 0; i < memorija; ++i){
            if((poruke[i] != NULL)&& (poruke[i] -> broj == brojPrimaoca)  && (poruke[i] -> poslata == false) ){
                ++br;
            }
        }
        if(kredit >= (br * CENA_SMS)){
            kredit -= (br * CENA_SMS);
            for(int i = 0; i < memorija; ++i){
                if((poruke[i] != NULL)&& (poruke[i] -> broj == brojPrimaoca)  && (poruke[i] -> poslata == false) ){
                    Poruka *temp = poruke[i];
                    temp -> poslata = true;
                    uspesno = true;
                }
            }
        }
    }

    for(int i = 0; i < memorija; ++i){
        if((poruke[i] != NULL) && (poruke[i] -> broj == brojPrimaoca) && (poruke[i] -> poslata == false) ){
            Poruka *temp = poruke[i];
            temp -> poslata = true;
            uspesno = true;
        }
    }
    return uspesno;
}

ostream& operator<<(ostream &out, const Mobilni &mobilniTelefon){
    out << "     Kredit: " << mobilniTelefon.kredit << "rsd" << endl;
    out << "   Memorija: " << mobilniTelefon.memorija << endl;
    out << "Iskorisceno: " << mobilniTelefon.zauzeto() << endl;
    out << "     Poruke:  " << endl;
    if(mobilniTelefon.zauzeto() > 0){
        for(int i = 0, br = 1; i < mobilniTelefon.memorija; ++i){
            if(mobilniTelefon.poruke[i] != NULL){
                out << "              " << br++ << "." << endl;
                out << "              " << "   Broj: " << mobilniTelefon.poruke[i] -> broj << endl;
                out << "              " << "  Tekst: " << mobilniTelefon.poruke[i] -> tekst << endl;
                out << "              " << "Poslata: " << ((mobilniTelefon.poruke[i] -> poslata) ? "DA" : "NE") << endl;
            }
        }
    }else{
        out << "              \t ****** NEMA PORUKA ****** ";
    }
    out << endl;
    return out;
}

int main(){

    Mobilni nokiaN95(10, 100);

    cout << nokiaN95 << endl;

    cout << "dodavanje poruka ..." << endl;
    nokiaN95.dodajSms("+38164111111", "Vidimo se veceras. Pozzz");
    nokiaN95.dodajSms("+38164111111", "Jesi li polozio ispit?");
    nokiaN95.dodajSms("+38164111111", "Idemo li na trening zajedno?");

    Poruka p1 = {"+38160222222","U koliko sati se nalazimo kod katedrale?", false};
    Poruka p2 = {"+38160222222","Kako si prosao na ispitu iz matematike?", false};
    Poruka p3 = {"+38160222222","Imas li skripte iz matematike?", false};

    nokiaN95.dodajSms(p1);
    nokiaN95.dodajSms(p2);
    nokiaN95.dodajSms(p3);

    nokiaN95.dodajSms("+38166444444", "Kako je bilo na rodjendanu :)?");
    nokiaN95.dodajSms("+38166444444", "Jeste li sleteli u Beograd?");
    nokiaN95.dodajSms("+38165777777", "Hoces li sa nama na kosarku?");
    nokiaN95.dodajSms("+38166444444", "Javite mi ako treba da dodjem po vas?");

    cout << nokiaN95 << endl;

    cout << "azuriranje poruke..." << endl;
    nokiaN95.azurirajSms("+38165777777", "Hoces li sa nama na kosarku?", "Hoces li sa nama na fudbal?");
    cout << nokiaN95 << endl;

    cout << "azuriranje poruka..." << endl;
    nokiaN95.azurirajSms("+38166444444", "azuriranje svih poruka primaoca +38166444444");
    cout << nokiaN95 << endl;

    cout << "slanje poruke..." << endl;
    nokiaN95.posaljiSMs("+38165777777");
    cout << nokiaN95 << endl;

    cout << "slanje poruka..." << endl;
    nokiaN95.posaljiSMs("+38160222222");
    cout << nokiaN95 << endl;

    cout << "brisanje poruke..." << endl;
    nokiaN95.obrisiSms("+38165777777", "Hoces li sa nama na fudbal?");
    cout << nokiaN95 << endl;

    cout << "brisanje poruka..." << endl;
    nokiaN95.obrisiSms("+38164111111");
    cout << nokiaN95 << endl;

    cout << "brisanje svih poruka..." << endl;
    nokiaN95.obrisiSms();
    cout << nokiaN95 << endl;

    cout << "dopunjavanje kredita" << endl;
    nokiaN95.dopunaKredita(150);
    cout << nokiaN95 << endl;


    return 0;
}
