#include <iostream>

using namespace std;

class Complex {
public:
	Complex();                                     // Default constructor
	Complex(double realPart, double imagPart);     // Constructor with two parameters
	Complex(double realPart);                      // Constructor with single parameter

	bool operator ==(const Complex& other) const;      // Overloaded operators : ==
	Complex operator +(const Complex& other) const;    // +
	Complex operator -(const Complex& other) const;    // -
	Complex operator *(const Complex& other) const;    // *

	friend istream& operator >>(istream& in, Complex& c);           // Input
	friend ostream& operator <<(ostream& out, const Complex& c);    // Output
private:

};

int main() {                                // Test program

	return 0;
}


bool Complex::operator ==(const Complex& other) const {

}

Complex Complex::operator +(const Complex& other) const {

}

Complex Complex::operator -(const Complex& other) const {

}

Complex Complex::operator *(const Complex& other) const {

}

istream& operator >>(istream& in, Complex& c) {

}

ostream& operator <<(ostream& out, const Complex& c) {

}