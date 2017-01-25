// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>


using namespace std;

class Parent {

private:
	int one;
public:

	Parent() :one(0) {}
	Parent(const Parent& other) {
		one = other.one;
	}

	virtual void print() {
		cout << "Parent" << endl;
	}
};

class Child : public Parent {
private:
	int two;
public:

	Child() : two(0) {}
	virtual void print() {
		cout << "Child" << endl;
	}
};


int main()
{
	Child ch;

	Parent& p = ch;

	p.print();

	Parent p1 = Child(); // Here the Child object is sliced to the parent object and the two member is lost.
	p1.print();
    return 0;
}

