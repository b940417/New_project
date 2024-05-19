Complex::Complex() : real(0), imaginary(0) {}
Complex::Complex(double realPart, double imagPart) : real(realPart), imaginary(imagPart) {}
Complex::Complex(double realPart) : real(realPart), imaginary(0) {}

bool Complex::operator ==(const Complex& other) const {
	return real == other.real && imaginary == other.imaginary;
}

Complex Complex::operator +(const Complex& other) const {
	return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator -(const Complex& other) const {
	return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator *(const Complex& other) const {
	double newReal = real * other.real - imaginary * other.imaginary;
	double newImaginary = real * other.imaginary + imaginary * other.real;
	return Complex(newReal, newImaginary);
}

istream& operator >>(istream& in, Complex& c) {
	cout << "Enter real part: ";
	in >> c.real;
	cout << "Enter imaginary part: ";
	in >> c.imaginary;
	return in;
}

ostream& operator <<(ostream& out, const Complex& c) {
	out << c.real << " + " << c.imaginary << "i";
	return out;
}