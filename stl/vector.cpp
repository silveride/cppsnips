
#include "stdafx.h"
#include<iostream>
#include<vector>


using namespace std;

int main()
{
	vector<string> strings(20);

	cout << "size :" << strings.size() << endl;

	int capacity = strings.capacity();

	for (int i = 0; i < 1000; ++i) {
		if (strings.capacity() != capacity) {
			capacity = strings.capacity();
			cout << "capacity:" << capacity<<endl;
		}

		strings.push_back("test");
	}

	strings.clear();
	cout << "new capacity:" << strings.capacity() << endl;

	strings.reserve(100000);  // This increases the capacity.
	cout << "new capacity:" << strings.capacity() << endl;

	//grid
	vector < vector<int> > grid(3, vector<int> (4,7));
	
	for (int row = 0; row < grid.size(); ++row) {
		for (int col = 0; col < grid[row].size(); ++col) {
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

	return 0;
}

