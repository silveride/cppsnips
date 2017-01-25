
#include "stdafx.h"
#include<iostream>
#include<vector>


using namespace std;

struct Test {
	virtual bool operator()(string str) = 0;

	virtual ~Test() {}
};


// Functor
struct MatchTest : public Test {
	bool operator()(string str) {
		return str == "lion";
	}
};

void check(string str, Test& test) {
	if (test(str)) {
		cout << "Test matches" << endl;
	}
	else {
		cout << "No Match" << endl;
	}
}


int main()
{
	MatchTest p;

	check("lion", p);
	return 0;
}