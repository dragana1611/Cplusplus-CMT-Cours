#include "Prodavnica.hpp"

int main(){

    Prodavnica p("Mikro market", 10);

    Artikal a1 = {1, "Hleb Sava", 55.00};
    Artikal a2 = {2, "Milka sa lesnikom 100gr", 123.45};
    Artikal a3 = {3, "CocaCola 1.5l", 87.02};

    // Testiranje da je prodavnica prazna
    prikazi(p);

    // Testiranje da li radi dodavanje artikala
    cout << "Dodavanje artikala..." << endl;
    p.dodajArtikal(a1); // pozicija 0
    p.dodajArtikal(a2); // pozicija 1
    p.dodajArtikal(a3); // pozicija 2

    // Testiranje da li su artikli uspesno dodati
    prikazi(p);

    // Testiranje da li je uspesno obrisan artikal sa sifrom 2
    cout << "Brisanje artikla..." << endl;
    p.obrisiArtikal(2); // brise artikal na poziciji 1 jer je njegova sifra == 2
    prikazi(p);

    // Testiranje da li je artikal dodat na prethodno obrisanu poziciju
    // ili je u pitanju sledeca po redu pozicija 3
    p.dodajArtikal(a2);
    Artikal **pArtikli = p.getArtikli();
    if(pArtikli[1] == NULL){
        cout << "Artikal je dodat na prethodno obrisanu poziciju" << endl;
    }else{
        cout << "Artikal je dodat na novu pozicju" << endl;
    }
    prikazi(p);

    // Testiranje da li radi azuriranje cene
    cout << "Azuriranje cene..." << endl;
    p.azurirajCenu(1, 60.94);
    prikazi(p);

    cout << "Rastuce azuriranje cene..." << endl;
    p.sortiraj(RASTUCE);
    prikazi(p);

    cout << "Opadajuce azuriranje cene..." << endl;
    p.sortiraj(OPADAJUCE);
    prikazi(p);

    cout << "Najjeftiniji artikal..." << endl;
    const Artikal *pVrstArt = p.vrstaArtikla(NAJJEFTINIJI);
    prikazi(*pVrstArt);

    cout << "Najskuplji artikal..." << endl;
    pVrstArt = p.vrstaArtikla(NAJSKUPLJI);
    prikazi(*pVrstArt);

    return 0;
}
