//
// Created by LENOVO 3 on 11/18/2020.
//

#ifndef LAB11_COMPLEX_H
#define LAB11_COMPLEX_H

//The class has realPart and imaginaryPart as data members,
//the member functions set(), get(), print(), and a default parameterize constructor
class complex {
private:
    double rp,ip;
public:
    void set(double,double);
    void get(double&,double&)const;
    void print()const;
    complex(double=0.0,double=0.0);
    complex operator+(const complex &)const;
    bool operator==(const complex &)const;
    friend complex operator* (const complex&, const complex&);
    friend bool operator>(const complex &,const complex &);
};



#endif //LAB11_COMPLEX_H
