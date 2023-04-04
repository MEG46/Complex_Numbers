#include <iostream>
using namespace std;
class complexNumber {
private:
	int real, imag;
public:
	complexNumber(int r = 0, int i = 0);
	~complexNumber();
	complexNumber(const complexNumber& oth);
	int getReal() const {
		return real;
	}
	int getImag() const {
		return imag;
	}
	void setValue(int r = 0, int i = 0);
	complexNumber addComplex(const complexNumber& oth);
	complexNumber multiplyComplex(const complexNumber& oth);
	complexNumber subtractComplex(complexNumber& oth);
	complexNumber multiplyConstant(int constant);
	void displayComplex();
};
complexNumber::complexNumber(int r, int i) {
	real = r;
	imag = i;
	cout << "The number has been created!" << endl;
}
complexNumber::~complexNumber() {
	cout << "The number has been destroyed!" << endl;
}
complexNumber::complexNumber(const complexNumber& oth) {
	real = oth.real;
	imag = oth.imag;
	cout << "The number has been copied to target!" << endl;

}
void complexNumber::setValue(int r,int i) {
	real = r;
	imag = i;
}
void complexNumber::displayComplex() {
	if (imag < 0) {
		cout << real << imag << "i" << endl;
	}
	else {
		cout << real << "+" << imag << "i" << endl;
	}
}
complexNumber complexNumber::addComplex(const complexNumber& oth) {
	complexNumber result;
	result.real = real + oth.real;
	result.imag = imag + oth.imag;
	return result;
}
complexNumber complexNumber::multiplyComplex(const complexNumber& oth) {
	complexNumber result;
	result.real = (real * oth.real) - imag * oth.imag;
	result.imag = (real * oth.imag) + imag * oth.real;
	return result;
}
complexNumber complexNumber::subtractComplex(complexNumber& oth) {
	complexNumber result;
	result.real = real - oth.real;
	result.imag = imag - oth.imag;
	return result;
}
complexNumber complexNumber::multiplyConstant(int constant) {
	complexNumber result;
	result.real = real * constant;
	result.imag = imag * constant;
	return result;
}
