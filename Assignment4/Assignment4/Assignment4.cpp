//============================================================================
// Name        : Assignment4.cpp
// Author      : Syed Sadman
// Assignment  : Template
// Description : You are given a main() function which takes a set of inputs. The type of input governs the kind of
//				 operation to be performed, i.e.concatenation for stringsand addition for int or float. You need to write
//				 the class template AddElements which has a function add() for giving the sum of int or float elements.
//============================================================================


#include <iostream>
using namespace std;

template <class T> class AddElements {
public:
	T element;
	AddElements(T i) { element = i; }
	T add(T i) { return element + i; }
};

int main() {

	int argSize;
	cout << "How many inputs?" << endl;
	cin >> argSize;

	for (int i = 0; i < argSize; i++) {
		// Ask for inputs
		string var;
		cin >> var;
		// Type checking
		if (var == "string") {
			string string1, string2;
			cin >> string1 >> string2;
			// Concatonation
			AddElements<string> mystring(string1);
			cout << mystring.add(string2) << endl;
		}
		else if (var == "int") {
			int int1, int2;
			cin >> int1 >> int2;
			AddElements<int> myint(int1);
			cout << myint.add(int2) << endl;
		}
		else if (var == "float") {
			double float1, float2;
			cin >> float1 >> float2;
			AddElements<double> myfloat(float1);
			cout << myfloat.add(float2) << endl;
		}

	}

	return 0;
}

