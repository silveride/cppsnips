//============================================================================
// Name        : HelloWorldMac.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Case 1 : Function throws string, int or const char *
int mightGoWrong() {

	throw string("test");
}

// Case 2 : Function throws bad_alloc, a standard error
class badalloc {
public:
	badalloc() {

		// All latest implementation throws a bad_alloc exception.
		char * newptr = new char[9999999999999999];
		delete[] newptr;
	}
};


// Case 3: Custom exception for class
class MyException : public exception {
public:
	// This method is inherited from exception and could be overriden in childs
	virtual const char* what() const throw() {
		return "My Exception text";
	}
};

class MyClass {
public:

	// Note that if throw list is empty, it means the function wont throw exception and if
	// the function do throw, it will result in runtime time error.
	// If the function throw a different exception than specified in the throw, then the runtime
	// will throw an error.
	void badFunction ()  throw (MyException) {
		throw MyException();
	}
};


int main() {


	MyClass aClass;

	try {
		aClass.badFunction();
	} catch (MyException& e) {
		cout << e.what() <<endl;
	}

	try {
	badalloc a;
	} catch (bad_alloc& a) {
		cout << "Caught :"<<a.what() <<endl;
	}
	try {
	// mightGoWrong();
	} catch (int e) { // Note that the catch spans from most specialised to most generic
		cout<< "Error Code"<<e<<endl;
	} catch (char const * ptr){
		cout<< "Error Code"<<ptr<<endl;
	} catch (string& e){
		cout<< "Error Code str"<<e<<endl;
	}

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
