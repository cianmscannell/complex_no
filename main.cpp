#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
	//Test the implementation
	Complex c1, c2, c3, c4,c5;
	c1.set_real(10.0);
  c1.set_imag(-2.0);
  c2.set_real(-5.0);
  c2.set_imag(4.5);
  c3 = c1 + c2;
  c4 = c2 * c3;
	c5 = c4 / c3;
	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;
	cout << c4 << endl;
	cout << c5 << endl;

	cin.get();
	return 0;
}
