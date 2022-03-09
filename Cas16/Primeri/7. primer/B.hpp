#ifndef B_HPP_INCLUDED
#define B_HPP_INCLUDED

#include "A.hpp"

class B : public A{
    public:
        string rec;
        B(string s);
};

#endif // B_HPP_INCLUDED
