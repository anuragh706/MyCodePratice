#include<iostream>
using namespace std;

class Node{

public:

	double data;
	Node* next;
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

	void insertinfront(double data1);
	void deletenode(double data1);
	void ExchangeFirstAndLast();
	void Display();
};

void CircularLinkedList::insertinfront(double data1) {

	Node* new_node = new Node(data1);
	if (head == NULL) {
		head = new_node;
		head->next = head;
		return;
	}

	Node* temp = head;
	while (temp != NULL && temp->next!=head) {
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->next = head;
	head = new_node;

}

void CircularLinkedList::Display(){

	if (head == NULL) {
	
		cout << "Empty list";
		return;
	}

	Node* temp = head;
	while (temp != NULL && temp->next != head)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}

	cout << temp->data<<endl;

}

void CircularLinkedList::ExchangeFirstAndLast() {

	if (head == NULL) {
		cout << "Empty list";
		return;
	}

	if (head->next->next == head) {
	
		head = head->next;
		return;
	}

	Node* temp = head;

	while (temp->next->next !=head) {
		temp = temp->next;
	}

	Node* temp2 = temp->next;
	temp2->next = head->next;
	head->next = temp2;
	temp->next = head;
	head = temp2;

}

int main() {

	CircularLinkedList l1;
	l1.insertinfront(50);
	l1.insertinfront(150);
	l1.insertinfront(250);
	l1.insertinfront(350);
	l1.insertinfront(51);
	l1.insertinfront(59);
	l1.insertinfront(69);
	l1.Display();
	l1.ExchangeFirstAndLast();
	l1.Display();


}