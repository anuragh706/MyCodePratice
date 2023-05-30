#include<iostream>
using namespace std;

class Node {

public:

	Node* next;
	int data;
	Node() {

		data = 0;
		next = NULL;
	}
	Node(int data1) {
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
	void InsertNode(int data);
	void ReverseList();
	void PrintList();

};

void LinkedList::InsertNode(int data) {
	
	Node* new_node = new Node(data);
	if (head == NULL) {
		head = new_node;
		return;
	}
	Node* ctr = head;

	while (ctr->next != NULL) {
		ctr = ctr->next;
	}
	ctr->next = new_node;
}

void LinkedList::ReverseList() {

	if (head == NULL) {
		cout << "Empty List.";
			return;
	}
	Node* current = head;
	Node* prev = NULL;
	Node* next = NULL;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	head = prev;
}

void LinkedList::PrintList() {

	Node* ctr = head;
	if (head == NULL) {
		cout << "Empty List";
		return;
	}

	while (ctr != NULL) {
		cout << ctr->data << "->";
		ctr = ctr->next;
	}
	cout << endl;
}
int main() {

	LinkedList l1;
	l1.InsertNode(3);
	l1.InsertNode(45);
	l1.InsertNode(21);
	l1.InsertNode(29);
	l1.InsertNode(23);
	l1.InsertNode(78);
	l1.PrintList();
	l1.ReverseList();
	l1.PrintList();





}