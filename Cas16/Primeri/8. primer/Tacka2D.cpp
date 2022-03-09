#include "Tacka2D.hpp"

Tacka2D::Tacka2D(int xx, int yy){
    x = new int(xx);
    y = new int(yy);
    cout << "2D" << endl;
}

Tacka2D::~Tacka2D(){
    delete x;
    delete y;
    cout << "2D" << endl;
}
