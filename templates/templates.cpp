// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>


using namespace std;


// Contention between template function and normal function
template <typename T>
void print(T a) {
	cout << "Temp value: " << a << endl;
}

// Without any template arguement, c++ will try to call this
void print(int a) {
	cout << "Int value:" << a << endl;
}


template <typename T>
void show() {
	cout << "Temp value: " << T() << endl;
}


int main()
{
	print<>(10);
	print(11); 
	show<int>(); // Here the template has to explicityly mentioned because as there are no args to function, c++ cannot deduce the type the template should be instantiated for.
    return 0;
}

