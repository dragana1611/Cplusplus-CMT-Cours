#include "Tacka3D.hpp"

Tacka3D::Tacka3D(int xx, int yy, int zz) : Tacka2D(xx, yy){
    z = new int(zz);
    cout << "3D" << endl;
}

Tacka3D::~Tacka3D(){
    delete z;
    cout << "3D" << endl;
}
