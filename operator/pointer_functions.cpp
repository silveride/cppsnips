// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>


using namespace std;

void test() {
	cout << "Test function" << endl;
}

// pointer to function returning void and taking no args

typedef void(*pTest)();

// Usage of function pointer to mimic count_if in algorithms.
int countString(vector<string>& strings, bool(*match) (string str)) {
	
	vector<string>::const_iterator itervec = strings.begin();

	int Count = 0;

	for (; strings.end() != itervec; ++itervec) {
		if (match(*itervec)) {
			cout << " matched" << endl;
			++Count;
		}
	}
	return Count;
}

int main()
{
	
	pTest tst= test;

	// Pointer to a function that takes no args and returns the previous pointer
	pTest (*pptr)();

	pTest();

    return 0;
}

