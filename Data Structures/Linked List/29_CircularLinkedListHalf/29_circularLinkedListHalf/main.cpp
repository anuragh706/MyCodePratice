#include <iostream>
using namespace std;

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

class CircularLinkedList {

public:
	Node* head;
	CircularLinkedList() {
	
		head = NULL;
	}
	void InsertInTheFront(double data1);
	void display();
	Node* CutInHalf();

};

void CircularLinkedList::InsertInTheFront(double data1) {
	Node* new_node = new Node(data1);
	if (head == NULL) {
		head = new_node;
		head->next = head;
		return;

	}

	Node* temp = head;
	if (temp->next == NULL) {
		head->next = new_node;
		new_node->next = head;
		head = new_node;
		return;
	}
	while (temp->next != head) {

		temp = temp->next;
	}

	temp->next = new_node;
	new_node->next = head;
	head = new_node;

}


void CircularLinkedList::display() {

	if (head == NULL) {
		cout << "Empty list";
		return;
	}
	Node* temp = head;
	do {
		cout << temp->data << "->";
		temp = temp->next;
	} while (temp != head);

}

Node* CircularLinkedList::CutInHalf() {

	if (head == NULL) {
		cout << "Empty List";
		return head;
	}
	int ctr = 0;
	Node* temp = head;
	do {	
		temp = temp->next;
		ctr++;
	} while (temp->next != head);
	Node* last = temp;
	int half = ctr / 2;

	temp = head;
	while (half > 0) {
	
		temp = temp->next;
		half--;
	}
	Node* second_head = temp->next;
	temp->next = head;
	last->next = second_head;

	return second_head;
	

}
int main() {

	CircularLinkedList l1;
	l1.InsertInTheFront(21);
	l1.InsertInTheFront(32);
	l1.InsertInTheFront(34);
	l1.InsertInTheFront(76);
	l1.InsertInTheFront(54);
	l1.InsertInTheFront(90);
	l1.InsertInTheFront(78);
	l1.InsertInTheFront(29);
	Node* head2=l1.CutInHalf();
	l1.display();

	Node* temp = head2;
	cout << endl;
	while (temp->next != head2) {
	
		cout << temp->data << "=>";
		temp = temp->next;
	}
	cout << temp->data;

}