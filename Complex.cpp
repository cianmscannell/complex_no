#include <iostream>
#include <math.h>
#include "Complex.h"

using namespace std;

Complex::Complex(){
	zero();
}

void Complex::set_real(double r){
	real = r;
}

void Complex::set_imag(double i){
	imag = i;
}

double Complex::magnitude(){
	return sqrt(real * real + imag * imag);
}

Complex Complex::operator+(const Complex &right) const{
	Complex tmp;
	tmp.real = real + right.real;
	tmp.imag = imag + right.imag;
	return tmp;
}

Complex Complex::operator-(const Complex &right) const{
	Complex tmp;
	tmp.real = real - right.real;
	tmp.imag = imag - right.imag;
	return tmp;
}

Complex Complex::operator+() const{
	Complex tmp;
	tmp.real = this->real;
	tmp.imag = this->imag;
	return tmp;
}

Complex Complex::operator-() const{
	Complex tmp;
	tmp.real = -this->real;
	tmp.imag = -this->imag;
	return tmp;
}

const Complex &Complex::operator=(const Complex &other){
	if(&other != this){
			real = other.real;
			imag = other.imag;
		}
	return *this;
}

ostream &operator<<(ostream &out, const Complex &val){
	out << val.real;
	if(val.imag > 0)
		out << "+" << val.imag ;
	else
		out << "-" << -val.imag ;
	out << "i"<< endl;
	return out;
}


Complex Complex::operator*(const Complex &right) const{
	Complex tmp;
	tmp.real = (real * right.real) - (imag * right.imag) ;
	tmp.imag = (real * right.imag) + (imag * right.real) ;
	return tmp;
}

Complex Complex::operator/(const Complex &right) const{
	Complex tmp;
	tmp.real = ((real * right.real) + (imag * right.imag))/(right.real * right.real + right.imag * right.imag);
	tmp.imag = (-(real * right.imag) + (imag * right.real))/(right.real * right.real + right.imag * right.imag);
	return tmp;
}
