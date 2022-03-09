#include "Prodavnica.hpp"

Prodavnica::Prodavnica(string n, int broj){
    naziv = n;
    el = broj;
    artikli = new Artikal*[el];
    for(int i = 0; i < el; ++i){
        artikli[i] = NULL;
    }
}

Prodavnica::~Prodavnica(){
    for(int i = 0; i < el; ++i){
        if(artikli[i] != NULL){
            delete artikli[i];
            artikli[i] = NULL;
        }
    }
    delete[] artikli;
    artikli = NULL;
}

int Prodavnica::brojMesta()const{
    return el;
}

int Prodavnica::brojArtikala()const{
    int br = 0;
    for(int i = 0; i < el; ++i){
        if(artikli[i] != NULL){
            ++br;
        }
    }
    return br;
}

string Prodavnica::getNaziv()const{
    return naziv;
}

Artikal** Prodavnica::getArtikli()const{
    return artikli;
}

bool Prodavnica::dodajArtikal(Artikal a){
    int poz = -1;
    for(int i = 0; i < el; ++i){
        if(artikli[i] == NULL){
            poz = i;
            break;
        }
    }
    if(poz != -1){
        artikli[poz] = new Artikal;
        *artikli[poz] = a;
        return true;
    }
    return false;
}

bool Prodavnica::obrisiArtikal(int s){
    if(brojArtikala() > 0){
        for(int i = 0; i < el; ++i){
            if(artikli[i] != NULL && (*artikli[i]).sifra == s){
                delete artikli[i];
                artikli[i] = NULL;
            }
        }
    }
    return false;
}

bool Prodavnica::azurirajCenu(int s, double c){
    for(int i = 0; i < el; ++i){
        if(artikli[i] != NULL && (*artikli[i]).sifra == s){
            (*artikli[i]).cena = c;
            return true;
        }
    }
    return false;
}

void Prodavnica::sortiraj(VrstaSortiranja vs){
    for(int i = 0; i < el - 1; ++i){
        for(int j = i + 1; j < el; ++j){
            if(artikli[i] != NULL && artikli[j] != NULL){
                Artikal *temp = artikli[i];
                switch(vs){
                    case RASTUCE:
                        if( (*artikli[i]).cena > (*artikli[j]).cena ){
                            artikli[i] = artikli[j];
                            artikli[j] = temp;
                        }
                        break;
                    case OPADAJUCE:
                        if( (*artikli[i]).cena < (*artikli[j]).cena ){
                            artikli[i] = artikli[j];
                            artikli[j] = temp;
                        }
                        break;
                }
            }
        }
    }
}

const Artikal* Prodavnica::vrstaArtikla(VrstaArtikla va)const{
    Artikal *temp = NULL;
    for(int i = 0; i < el; ++i){
        if(temp == NULL && artikli[i] != NULL){
            temp = artikli[i];
        }else if(artikli[i] != NULL){
            switch(va){
                case NAJJEFTINIJI:
                    if( (*temp).cena > (*artikli[i]).cena){
                        temp = artikli[i];
                    }
                    break;
                case NAJSKUPLJI:
                    if( (*temp).cena < (*artikli[i]).cena){
                        temp = artikli[i];
                    }
                    break;
            }
        }
    }

    return temp;
}

void prikazi(const Prodavnica &p){
    cout << "========== " << p.getNaziv() << "==========" << endl;
    cout << " Stanje: " << p.brojArtikala() << " od " << p.brojMesta() << endl;
    cout << "Artikli:" << endl;

    Artikal **temp = p.getArtikli();

    if(p.brojArtikala() == 0){
        cout << "\t" << "Svi rafovi su prazni.";
    }else{
        for(int i = 0; i < p.brojMesta(); ++i){
            if(temp[i] != NULL){
                cout << "\t" << "Sifra: " << (*(temp[i])).sifra << endl;
                cout << "\t" << "Naziv: " << (*(temp[i])).naziv << endl;
                cout << "\t" << " Cena: " << (*(temp[i])).cena << endl << endl;
            }
        }
    }
    cout << endl << endl;;
}

void prikazi(const Artikal &a){
    cout << "\t" << "Sifra: " << a.sifra << endl;
    cout << "\t" << "Naziv: " << a.naziv << endl;
    cout << "\t" << " Cena: " << a.cena << endl << endl;
}
