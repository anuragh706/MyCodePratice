#include <iostream>
using namespace std;

/*
Given a sorted doubly linked list and a value to insert, write a function to insert the value in sorted way.

*/


class Node {

public:
	Node* next;
	Node* prev;
	double data;
	Node() {



		next = NULL;
		prev = NULL;
		data = 0;
	}

	Node(double data1) {
	
		data = data1;
		next = NULL;
		prev = NULL;
	}
};

class DoublyLinkedList {
public:

	Node* head;

	DoublyLinkedList() {
		head = NULL;
	}
	void InsertNode(double data1);
	void SortedInsertNode(double data1);
	void Display();
};

void DoublyLinkedList::SortedInsertNode(double data1) {
	Node* new_node = new Node(data1);
	if (head == NULL) {
		head = new_node;
		return;
	}

	if (head->next == NULL) {
	
		if (head->data <= new_node->data) {
			head->next = new_node;
			new_node->prev = head;
			return;
		}
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
		return;
		
	}

	if (new_node->data <= head->data) {
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
		return;
	}
	Node* temp = head;
	while (temp->next != NULL ) {
		if (new_node->data <= temp->next->data)
			break;
		temp = temp->next;
	}

	new_node->next = temp->next;
	if (temp->next != NULL) {
		temp->next->prev = new_node;
	}
	
	temp->next = new_node;
	new_node->prev = temp;
}

void DoublyLinkedList::Display() {

	if (head == NULL) {
	
		cout << "Empty List";
		return;

	}
	Node* temp = head;
	while (temp != NULL) {
	
		cout << temp->data<<"->";
		temp = temp->next;
	}

}
int main() {

	DoublyLinkedList l1;
	l1.SortedInsertNode(100);
	l1.SortedInsertNode(50);
	l1.SortedInsertNode(10);
	l1.SortedInsertNode(25);
	l1.SortedInsertNode(150);
	l1.SortedInsertNode(1000);
	l1.SortedInsertNode(200);
	l1.Display();



}