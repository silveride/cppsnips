/*
 * Complex.h
 *
 *  Created on: 24Jan.,2017
 *      Author: manu
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include<iostream>


class Complex {
private:
	double real;
	double imaginary;
public:

	// Constructors and Destructors
	Complex();
	Complex(double real, double imag);
	Complex(Complex& other);
	virtual ~Complex();

	// operator
	const Complex& operator= (const Complex& other);
	bool operator== (const Complex& rhs) const;
	bool operator!= (const Complex& rhs) const;

	Complex operator*() const;

	// getters
	double getReal() const { return real; }
	double getImaginary() const { return imaginary;}

};


std::ostream& operator<< (std::ostream& out, const Complex& cmp);

Complex operator+ (const Complex& lhs, const Complex& rhs);
Complex operator+ (const Complex& lhs, const double rhs);
//Complex operator+ (const double lhs, const Complex& rhs) { return rhs+lhs;}

/*
 * Operators that cannot be overloaded :
 ?: (conditional)
 . (member selection)
 .* (member selection with pointer-to-member)
 :: (scope resolution)
 sizeof (object size information)
 typeid (object type information)
*/



#endif /* COMPLEX_H_ */
