/*
 * Complex.cpp
 *
 *  Created on: 24Jan.,2017
 *      Author: manu
 */

#include "Complex.h"

using namespace std;

Complex::Complex(): real(0), imaginary(0) {
	// TODO Auto-generated constructor stub

}

Complex::Complex( double real,  double imag): real(real), imaginary(imag) {
	// TODO Auto-generated constructor stub

}

Complex::Complex(Complex& cmplx){
	// TODO Auto-generated constructor stub
    real = cmplx.real;
    imaginary = cmplx.imaginary;
}

Complex::~Complex() {
	// TODO Auto-generated destructor stub
}


const Complex& Complex::operator= (const Complex& other) {
		real = other.real;
		imaginary = other.imaginary;

		return * this;
}


std::ostream& operator<< (std::ostream& out, const Complex& cmp){
	out<<"Real:"<<cmp.getReal()<<", Imaginary:"<<cmp.getImaginary()<<endl;
}

Complex operator+ (const Complex& lhs, const Complex& rhs) {

	double real = lhs.getReal() + rhs.getReal();

	double imag = lhs.getImaginary() + rhs.getImaginary();

	Complex vm(real,imag);

	return vm;

}


Complex operator+ (const Complex& lhs, const double rhs) {

	double real = lhs.getReal() + rhs;

	double imag = lhs.getImaginary();

	Complex vm(real,imag);

	return vm;

}

bool Complex::operator== (const Complex& rhs) const {
	return getReal() == rhs.getReal() && getImaginary() == rhs.getImaginary();
}

bool Complex::operator!= (const Complex& rhs) const {
	return !(*this==rhs);
}

Complex Complex::operator*() const {
	 Complex ret(real,-imaginary); // Conjugate of the complex number

	 return ret;
}

