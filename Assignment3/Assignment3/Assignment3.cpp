//==========================================================================================================
// Name        : Assignment3.cpp
// Author      : Syed Sadman
// Assignment  : LinkedLists
// Description : Write a program which takes a Dynamic Listand deletes any duplicate nodes from the list.
//				 The list is not sorted.
//==========================================================================================================

struct Node {
	int data;
	Node* link;
};

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
Node* head = NULL;

//function to append nodes
void inputToEnd(int data);

int main()
{
	//vector is used to sort and provide uniqueness
	vector<int> vec;

	//get input from user
	int number;
	cout << "ENTER INTEGERS AND END WITH CHAR" << endl;
	while (cin >> number) {
		vec.push_back( number);
	}

	//print out the list entered
	cout << "Entered List: " << vec[0];
	for (int i = 1; i < vec.size(); i++) {
		cout << "->" << vec[i];
	}
	cout << endl;

	//sorting and unique algorithms instead of reinventing the wheel
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	//enter sorted vector into linkedlist
	for (int i = 0; i < vec.size(); i++) {
		inputToEnd(vec[i]);
	}

	//print out contents of linkedlist
	Node* ptr = head;
	cout << "Modified List: " << head->data;
	while (ptr->link != NULL) {
		ptr = ptr->link;
		cout << "->" << ptr->data;
	}

	return 0;
}

void inputToEnd(int data) {
	Node *ptr = new Node(); //create a new node
	ptr->data = data;
	ptr->link = NULL; //last elt will be new tail

	//if empty, then make it the head
	if (head == NULL) {
		head = ptr;
	} 
	else {
		Node* temp = head; //start at head value
		
		//loop until second-to-last elt
		while (temp->link != NULL) {
			temp = temp->link; //temp will traverse to the next element
		}
		//once it finds first null, change pointer to tail
		temp->link = ptr;
	}

}


