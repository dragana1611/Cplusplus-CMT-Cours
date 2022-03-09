#ifndef A_HPP_INCLUDED
#define A_HPP_INCLUDED


class A{
    private:
        int x;
        static int instanci;
    public:
        A();
        A(int);
        A(const A&);
        ~A();
        int getX()const;
        int getInstanci()const;
};

#endif // A_HPP_INCLUDED
