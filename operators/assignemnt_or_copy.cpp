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


class Test {
	int id;
	string name;

public:
	Test () : id(0), name("") {}

	Test(int id, string name) : id (id), name(name) {}

	// Copy Constructor
	Test (const Test& other) {
		cout << " Copy constructor running" <<endl;
		id = other.id;
		name = other.name;
	}

	void print () {  cout << id << ":" << name << endl; }




	// The operator should return const Test& because of chaining a=b=c
	// The input should be const to cater for call on const objects

	const Test& operator= (const Test& other) {
		cout << "Assignment Running" << endl;

		id = other.id;
		name = other.name;

		return *this;
	}

};


int main() {

	Test test1(10,"Mike");

	test1.print();

	Test test2(2,"Bob");

	// Assignment operator called . Same as test2.operator=(test1)
	test2 = test1;

	test2.print();

	// Copy initialisation. Here the copy constructor is called.
	Test test3 = test2;

    /* Rule of 3: If you have explicitly implemented copy constructor, assignment operator or destructor,
     * you may have to implement the other two. If there is an explicit destructor that means there is
     * some memory allocated for the object which had to be deep copied in the other two operators.
     */
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
