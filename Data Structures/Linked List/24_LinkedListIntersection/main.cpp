#include<iostream>
using namespace std;
/*
There are two singly linked lists in a system. 
By some programming error, the end node of one of the linked lists got linked to the second list, forming an inverted Y-shaped list. 
Write a program to get the point where two linked lists merge.
*/


class Node {

public: 

	Node* next;
	double data;

	Node() {
	
		data = 0;
		next = NULL;
	}

	Node(double data1) {
	
		data = data1;
		next = NULL;
	}

};
class LinkedList {

public:

	Node* head;

	LinkedList() {
		head = NULL;
	}
	void InsertNode(double x) {
	
		Node* new_node = new Node(x);
		if (head == NULL) {
			head = new_node;
			return;
		}
		Node* temp = head;
		while (temp->next != NULL) 
			temp = temp->next;
		
		temp->next = new_node;
	}

};

int main() {

	LinkedList l1;

	l1.InsertNode(5);
	l1.InsertNode(10);
	l1.InsertNode(34);

	l1.InsertNode(42);
	l1.InsertNode(32);

}