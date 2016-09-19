//header file
//
#ifndef CS_COMPLEX_HEADER
#define CS_COMPLEX_HEADER

#include <iostream>

using namespace std;

class Complex {
	friend ostream &operator<<(ostream &out, const Complex &val);
private:
    double real, imag;
    void zero() { real = 0.0; imag = 0.0; }
public:
  Complex();
  void set_real(double r);
  void set_imag(double i);
  double magnitude();
  Complex operator+ (const Complex &right) const;
	Complex operator* (const Complex &right) const;
	Complex operator/ (const Complex &right)const;//class member
  Complex operator- (const Complex &right) const;
	Complex operator+() const; //unary version
	Complex operator-() const;
	const Complex &operator=(const Complex &other);

};
#endif
