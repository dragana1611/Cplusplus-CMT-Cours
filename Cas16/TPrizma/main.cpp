#include <iostream>
#include <cmath>

using namespace std;

class Oblik
{
protected:
    int duzina;
    int sirina;
public:
    Oblik();
    Oblik(int, int);
    Oblik(const Oblik &);

    bool promeniDuzinu(int);
    bool promeniSirinu(int);
    int vratiDuzinu()const;
    int vratiSirinu()const;

    //friend ostream& operator<<(ostream &, const Oblik &);
};


Oblik::Oblik()
{
    duzina = 1;
    sirina = 2;
}

Oblik::Oblik(int d, int s)
{
    duzina=d;
    sirina=s;
}

Oblik::Oblik(const Oblik &o)
{
    duzina=o.duzina;
    sirina=o.sirina;
}

bool Oblik::promeniDuzinu(int d)
{
    bool uspesno = false;
    if (duzina>0)
    {
        duzina  = d;
        uspesno = true;
    }
    return uspesno;
}

bool Oblik::promeniSirinu(int s)
{
    bool uspesno = false;
    if (sirina>0)
    {
        sirina  = s;
        uspesno = true;
    }
    return uspesno;
}

int Oblik::vratiDuzinu()const
{
    return duzina;
}

int Oblik::vratiSirinu()const
{
    return sirina;
}

ostream& operator<<(ostream &out, const Oblik &o)
{
    out << "Pravougaonik dimenzija"<< o.vratiDuzinu() << " x "
        << o.vratiSirinu() <<endl;
    return out;
}


class Pravougaonik: public Oblik
{

public:
    Pravougaonik(){
    duzina = 1;
    sirina = 2;
    };
    Pravougaonik(int d, int s): Oblik(d,s)
    {
        duzina = d;
        sirina = s;
    };


    int povrsina()const
    {
        return (duzina * sirina);
    }

    int obim()const
    {
        return (2*(duzina+sirina));
    }

    void ispis()const
    {
        cout<<"Pravougaonik dimenzija " << duzina << " x " << sirina
            << " ima povrsinu " << povrsina() << "m2, i obim " << obim()
            << "m" << endl;
    };
};

class JSTrougao
{
protected:
    int a;

public:
    JSTrougao();
    JSTrougao(int);
    JSTrougao(const JSTrougao &);

    bool promeniStranicu(int);
    int vratiStranicu()const;
    double povrsina()const;
    int obim()const;
    void ispisT()const;
};

JSTrougao::JSTrougao()
{
    a=1;
}

JSTrougao::JSTrougao(int aa)
{
    a=aa;
}

JSTrougao::JSTrougao(const JSTrougao &str)
{
    a=str.a;
}

bool JSTrougao::promeniStranicu(int aa)
{
    bool uspesno = false;
    if (a>0)
    {
        a  = aa;
        uspesno = true;
    }
    return uspesno;
}

int JSTrougao::vratiStranicu()const
{
    return a;
}

double JSTrougao::povrsina()const
{
    return (pow(a, 2)*sqrt(3))/4;
}

int JSTrougao::obim()const
{
    return (3*a);
}



void JSTrougao::ispisT()const
{
    cout<<"Jednakostranicni trougao dimenzija " << a << " x " << a << " x " << a << " ima povrsinu " << povrsina() << "m2, i obim " << obim()
        << "m" << endl;
};


class TPrizma : public JSTrougao, public Pravouganik
{
public:
    TPrizma(){
    Pravougaonik::vratiSirinu() = 1;
    JSTrougao::vratiStranicu() = 1;
    };
   TPrizma(int aa, int HH){
    Pravougaonik::vratiSirinu() = HH;
    JSTrougao::vratiStranicu() = aa;
   }
    TPrizma(const TPrizma &p){
    a=p.a;
    H=p.H;
    }

    bool promeniA(int);
    bool promeniH(int);
    int vratiA()const;
    int vratiH()const;
    double povrsina()const;
    double obim()const;
    void ispisi()const;
};

bool TPrizma::promeniA(int aa){
    bool uspesno = false;
    if (a>0)
    {
        a  = aa;
        uspesno = true;
    }
    return uspesno;
}

bool TPrizma::promeniH(int HH){
    bool uspesno = false;
    if (H>0)
    {
        H  = HH;
        uspesno = true;
    }
    return uspesno;
}

int TPrizma::vratiA()const
{
    return a;
}

int TPrizma::vratiH()const
{
    return H;
}



int main()
{
    Pravougaonik p1, p2(4,8), p3(p1);
    p1.ispis();
    p2.ispis();
    p3.ispis();

    JSTrougao jst1, jst2(2), jst3(jst1);
    jst1.ispisT();
    jst2.ispisT();
    jst3.ispisT();


    return 0;
}

