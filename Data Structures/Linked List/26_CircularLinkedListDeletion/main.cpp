#include<iostream>
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
	CircularLinkedList()
	{
		head = NULL;
	}
	void InsertInTheEnd(double data1);
	void InsertInTheFront(double data1);
	void DeleteNode(double data1);
	void display();

};

void CircularLinkedList::InsertInTheEnd(double data1) {

	Node* new_node = new Node(data1);
	if (head == NULL) {
		head = new_node;
		return;
	}
	//cout << head->data<<endl;
	Node* temp = head;
	//cout << temp;

	while (temp!=NULL && temp->next!= head) {
		temp = temp->next;
	}

	if (temp == NULL) {
		head->next = new_node;
		new_node->next = head;
		return;
	}

	temp->next = new_node;
	new_node->next = head;
}

void CircularLinkedList::display() {

	if (head == NULL) {
		cout << "Empty List";
		return;
	}

	Node* temp = head;

	while (temp != NULL && temp->next != head) {
	
		cout << temp->data << "->";
		temp = temp->next;

	}

	cout << temp->data << "->"<<temp->next->data;

}

void CircularLinkedList::InsertInTheFront(double data1) {

	Node* new_node = new Node(data1);
	if (head == NULL) {
	
		head = new_node;
		return;
	}

	Node* temp = head;

	while (temp != NULL && temp->next != head) {
	
		temp = temp->next;

	
	}
	if (temp == NULL) {
	
		head->next = new_node;
		new_node->next = head;
		head = new_node;
		return;
	}
	temp->next = new_node;
	new_node->next = head;
	head = new_node;

}
int main() {
	
	CircularLinkedList l1;

	l1.InsertInTheEnd(10);
	l1.InsertInTheEnd(25);
	l1.InsertInTheEnd(34);
	l1.InsertInTheEnd(69);
	l1.InsertInTheEnd(74);
	l1.InsertInTheFront(75);
	//l1.InsertInTheFront(79);
	
	l1.display();

}