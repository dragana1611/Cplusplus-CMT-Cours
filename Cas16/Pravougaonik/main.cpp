#include <iostream>
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

    friend ostream& operator<<(ostream &, const Oblik &);
};


Oblik::Oblik()
{
    duzina = 1;
    sirina = 1;
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
    out << o.vratiDuzinu() << "x" << o.vratiSirinu();
    return out;
}


class Pravougaonik: public Oblik
{

public:
    Pravougaonik();
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

    friend ostream& operator<<(ostream &out, const Pravougaonik &p)
    {
        out << "Pravougaonik dimenzija " << (Oblik)p << " ima povrsinu " << p.povrsina() << "m2, i obim " << p.obim() << "m";
        return out;
    }
};


int main(void)
{
    Oblik o(4, 8);
    cout << o << endl;

    Pravougaonik p(5, 11);
    cout << p << endl;

    p.promeniDuzinu(5);
    p.promeniSirinu(7);

    cout<<p<<endl;

    return 0;
}

/*#include using namespace std;

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

friend ostream& operator<<(ostream &, const Oblik &);
};

Oblik::Oblik()
{
duzina = 1;
sirina = 1;
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
duzina = d;
uspesno = true;
}
return uspesno;
}

bool Oblik::promeniSirinu(int s)
{
bool uspesno = false;
if (sirina>0)
{
sirina = s;
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
out << o.vratiDuzinu() << "x" << o.vratiSirinu();
return out;
}


class Pravougaonik: public Oblik
{
public:
Pravougaonik();
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

friend ostream& operator<<(ostream &out, const Pravougaonik &p){
out << "Pravougaonik dimenzija " << (Oblik)p << " ima povrsinu " << p.povrsina() << "m2, i obim " << p.obim() << "m";
return out;
}
};


int main(void)
{
Oblik o(4, 8);
cout << o << endl;

Pravougaonik p(5, 11);
cout << p << endl;

return 0;
}*/
