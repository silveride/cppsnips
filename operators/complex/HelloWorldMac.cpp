//============================================================================
// Name        : HelloWorldMac.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

#include "Complex.h"


int main() {
	Complex c (2,3);
	Complex c1 = c;

	//cout<<c1<<endl;
	Complex c3 (1,2);

	Complex C4;
	C4 = c1+c3;

	C4 = C4+4;
	//cout<< C4 <<endl;

	Complex c5(1,2);

	if (c3 == c5) {
		cout << "test succeeded" <<endl;
	} else {
		cout << "test failed" <<endl;

	}

	cout << *C4 + *c5 <<endl; // conjugate addition

	return 0;
}
