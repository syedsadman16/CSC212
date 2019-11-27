//============================================================================
// Name        : Assignment2.cpp
// Author      : Syed Sadman
// Assignment  : Dynamic Bags
// Description : Consider an n-element array, 'a' , where each index i in the array contains a reference to an array of k(i)
//				 integers(where the value of k(i) varies from array to array).
//				 Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a
//				 and j denotes an index in the array located at a[i]. For each query, find and print the value of element j
//				 in the array at location a[i] on a new line.
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int row, query;
	cout << "Enter the # of rows and queries" << endl;
	cin >> row >> query;

	//Array of 5 integers with an empty vector of integers
	vector<int> vec[row];

	for (int i = 0; i < row; i++) {
		cout << "Enter # of columns and integer inputs for row " << i << endl;
		int columnSize;
		cin >> columnSize;

		for (int j = 0; j < columnSize; j++) {
			int inputs;
			cin >> inputs;
			vec[i].push_back(inputs);
		}

	}

	//Once we have the rows, now its time to request query positions
	for (int k = 0; k < query; k++) {
		cout << "Enter coordinate for query " << k << endl;
		int x, y;
		cin >> x >> y;
		cout << "[" << x << "," << y << "] = " << vec[x][y];
	}

	return 0;
}

/* Example:
2 2 (# of rows and # of queries)
3 1 5 4 (row 0 with 3 ints)
5 1 2 8 9 3 (row 1 with 5 ints)
0 1 (query 1 with row 0 and column/index 1)
1 3 (query 2 with row 1 and column 3)
OUPUT: 5 9
*/