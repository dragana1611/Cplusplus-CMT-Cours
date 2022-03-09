#include "Bankomat.hpp"

Bankomat::Bankomat(string n){
    naziv = n;
    brojKorisnika = 0;
    korisnici = NULL;
}

Bankomat::Bankomat(const Bankomat &b){
    naziv = b.naziv;
    brojKorisnika = b.brojKorisnika;
    korisnici = new Korisnik[brojKorisnika];
    for(int index = 0; index < brojKorisnika; ++index){
        korisnici[index] = b.korisnici[index];
    }
}

Bankomat::~Bankomat(){
    if(brojKorisnika == 1){
        delete korisnici;
    }else if(brojKorisnika > 1){
        delete[] korisnici;
    }
}

int Bankomat::sledeciId()const{
    int id = -1;
    if(brojKorisnika == 0){
        id = 1;
    }else{
        for(int i = 0; i < brojKorisnika; ++i){
            if(id < korisnici[i].id){
                id = korisnici[i].id;
            }
        }
        ++id;
    }
    return id;
}
bool Bankomat::dodajNovca(int id, double iznos, Valuta v){
    bool uspesno = false;
    for(int i = 0; i < brojKorisnika; ++i){
        if(korisnici[i].id == id){
            if(korisnici[i].novac.valuta == v){
                korisnici[i].novac.iznos += (iznos - iznos * 0.1);
            }else if(korisnici[i].novac.valuta == RSD && v == EUR){
                korisnici[i].novac.iznos += (iznos * 120) - (iznos * 120) * 0.1;
            }else if(korisnici[i].novac.valuta == EUR && v == RSD){
                korisnici[i].novac.iznos += (iznos / 120) - (iznos / 120) * 0.1;
            }
            break;
        }
    }
    return uspesno;
}

void Bankomat::dodajKorisnika(string im, string p, double iz, Valuta v){
    Korisnik k;
    k.id = sledeciId();
    k.ime = im;
    k.prezime = p;
    k.novac.iznos = iz;
    k.novac.valuta = v;

    if(brojKorisnika == 0){
        korisnici = new Korisnik;
        *korisnici = k;
        ++brojKorisnika;
    }else{
        Korisnik *temp = new Korisnik[brojKorisnika + 1];
        for(int i = 0; i < brojKorisnika; ++i){
            temp[i] = korisnici[i];
        }
        temp[brojKorisnika] = k;
        if(brojKorisnika == 1){
            delete korisnici;
        }else{
            delete[] korisnici;
        }
        korisnici = temp;
        ++brojKorisnika;
    }
}

bool Bankomat::podigniNovac(int id, double iz, Valuta v){
    bool uspesno = false;
    for(int i = 0; i < brojKorisnika; ++i){
        if(korisnici[i].id == id){
            if(korisnici[i].novac.valuta == v && korisnici[i].novac.iznos >= (iz + iz * 0.1)){
                korisnici[i].novac.iznos -= (iz + iz * 0.1);
                uspesno = true;
            }else if(korisnici[i].novac.valuta == RSD && v == EUR && korisnici[i].novac.iznos >= (iz * 120 + iz * 0.1)){
                korisnici[i].novac.iznos -= (iz * 120 + (iz * 120) * 0.1);
                uspesno = true;
            }else if(korisnici[i].novac.valuta == EUR && v == RSD && korisnici[i].novac.iznos >= (iz / 120 + iz * 0.1)){
                korisnici[i].novac.iznos -= (iz / 120 + iz / 120 * 0.1);
                uspesno = true;
            }
            break;
        }
    }
    return uspesno;
}

string Bankomat::getNaziv()const{
    return naziv;
}

Korisnik* Bankomat::getKorisnici()const{
    return korisnici;
}

int Bankomat::getBrojKorisnika()const{
    return brojKorisnika;
}

void prikazi(const Bankomat &b){
    cout << "    Naziv: " << b.getNaziv() << endl;
    cout << "Korisnika: " << b.getBrojKorisnika() << endl;
    cout << "Korisnici: " << endl;
    if(b.getBrojKorisnika() == 0){
        cout << "\t--- NEMA KORISNIKA ---";
    }else{
        for(int i = 0; i < b.getBrojKorisnika(); ++i){
            cout << "\tID: " << b.getKorisnici()[i].id
                 << " KORISNIK: " << b.getKorisnici()[i].ime + " " + b.getKorisnici()[i].prezime
                 << " IZNOS: " << b.getKorisnici()[i].novac.iznos;
                 switch(b.getKorisnici()[i].novac.valuta){
                    case EUR:
                        cout << " EUR";
                        break;
                    case RSD:
                        cout << " RSD";
                        break;
                 }
            cout << endl;
        }
    }
}
