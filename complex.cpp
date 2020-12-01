//
// Created by LENOVO 3 on 11/18/2020.
//

#include "complex.h"
#include <iostream>
#include <cmath>
using namespace std;
double i=sqrt(-1);
void complex::set(double r, double im){
   rp=r;
   ip=im;
}
void complex::print()const{
    cout<<"("<<rp<<","<<ip<<")"<<endl;
}

void complex::get(double &a,double &b)const{
    a=rp;
    b=ip;
}

complex complex::operator+(const complex &obj)const{
    complex temp;
    temp.rp=rp+obj.rp;
    temp.ip=ip+obj.ip;
    return temp;
}
bool complex::operator==(const complex &obj)const{
    return(rp==obj.rp && ip==obj.ip);
}
bool operator>(const complex &x,const complex &y){
    double ai,ar,bi,br;
    x.get(ai,ar);
    y.get(bi,br);

    return(sqrt(ai*ai+ar*ar))>sqrt(bi*bi+br*br);
}
complex operator*(const complex &x,const complex &y){
    complex temp;
    temp.rp= x.rp*y.rp - x.ip*y.ip;
    temp.ip=x.rp*y.ip + x.ip*y.rp;
    return temp;
}
complex ::complex(double a,double b){
    set(a,b);
}