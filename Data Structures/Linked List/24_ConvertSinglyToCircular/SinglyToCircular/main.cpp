#include<iostream>
using namespace std;

class Node {
public:

	int data;
	Node* next;
	
	Node() {
		data = 0.0;
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
	void Insert(double data);
	void Display();
	void ConvertToCircular();
	LinkedList() {
		head = NULL;

	}

};

void LinkedList::Insert(double data) {
	
	Node* new_node = new Node(data);
	if (head == NULL) {
		head = new_node;
		return;
	}
	new_node->next = head;
	head = new_node;
}

void LinkedList::Display() {
	Node* temp = head;

	while (temp != NULL && temp->next != head) {
		cout << temp->data << endl;
		temp = temp->next;
	}
}

void LinkedList::ConvertToCircular() {

	Node* temp = head;

	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = head;
}
int main() {

	LinkedList l1;

	l1.Insert(5);
	l1.Insert(10);
	l1.Insert(1);
	l1.Insert(90);
	l1.Insert(6);
	l1.Display();
	l1.ConvertToCircular();
	l1.Display();
}