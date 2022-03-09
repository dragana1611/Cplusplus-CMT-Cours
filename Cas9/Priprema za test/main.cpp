/*Napisati klasu Krug koja ce opisivati geometrijsku figuru krug.
Klasa treba da sadrzi : polje r realnog tipa double, staticko polje instaci,
 prazan konstruktor, konstruktor sa argumentima,
 konstruktor kopije, destruktor, metodu double getR() const,
 metodu int getinstanci() const, metodu double povrsina() const,
 metodu double obim() const
 Napisati slobodnu f-ju void prikazi(const Krug &) koja prikazuje duzinu
 poluprecnika, povrsinu i obim prosledjenog kruga, kao i broj trenutnih
 instanci.
 Napomene:
 -ceo program napisati u CB u jednom fajlu (main cpp)
 - napisani kod kopirati kao odgovor na pitanje
 - u slobodnoj f-ji main() obavezno napisati kratak test scenario

 */

#include <iostream>

using namespace std;

class Krug{
    private:
        double r;
        static int instanci;
    public:
        Krug(){
        ++instanci;
        r=1;
        }
        Krug(double rr){
        ++instanci;
        r = rr;
        }
        Krug(const Krug &k){
        ++instanci;
        r = k.r;
        }
        ~Krug(){
        --instanci;
        }
        double getR()const{
        return r;
        }
        int getInstanci()const{
        return instanci;
        }
        double povrsina()const{
        return r*r*3.14;
        }
        double obim ()const{
        return 2*r*3.14;
        }
};

int Krug::instanci = 0;

void prikazi (const Krug k){
    cout<<"---------Krug---------"<<endl;
    cout<<"         r= " << k.getR() <<endl;
    cout<<"         P= " << k.povrsina() <<endl;
    cout<<"         O= " << k.obim() <<endl;
    cout<<"instanci " << k.getInstanci() <<endl;
    cout<<"**********************"<<endl;

}

int main()
{
    Krug k1, k2(4), k3(k1);

    prikazi(k1);
    prikazi(k2);
    prikazi(k3);
    return 0;
}
