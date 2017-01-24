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


	// The operator should return const Test& because of chaining a=b=c
	// The input should be const to cater for call on const objects

	const Test& operator= (const Test& other) {
		cout << "Assignment Running" << endl;

		*this = other;	// Use the assignment operator.
	}

	// Friends can access the private members of the class.
	friend ostream& operator<< (ostream& out, const Test& test) {
		out << "id:" <<test.id<<" name:"<<test.name;

		return out;
	}

};


int main() {

	Test test1(10,"Mike");

	// << operator is right to left associative
	cout << test1 << endl;

	return 0;
}
