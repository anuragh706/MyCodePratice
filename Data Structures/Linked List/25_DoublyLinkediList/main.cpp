#include <iostream>
using namespace std;

class Node {

public:
	Node* prev;
	Node* next;
	double data;
	Node() {
		data = 0;
		prev = NULL;
		next = NULL;
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

	void insertatend(double data);
	void insertinfront(double data);
	void delete_node(double data);
	void reverse();
	void display();
};

void DoublyLinkedList::insertatend(double data) {

	Node* new_node = new Node(data);
	if (head == NULL) {
		head = new_node;
		return;
	}
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = new_node;
	//cout << new_node->data;
	new_node->prev = temp;
}

void DoublyLinkedList::insertinfront(double data) {

	Node* new_node = new Node(data);

	if (head == NULL) {
		head=new_node;
		//cout << head->data<<endl;
		return;
	}
	new_node->next = head;
	head->prev = new_node;
	head = new_node;
}

void DoublyLinkedList::delete_node(double data) {

	Node* new_node = new Node(data);

	if (head == NULL) {
		cout << "Linked List Empty";
		return;
	}

	Node* temp = head;

	while (temp != NULL) {
	
		if (temp->data == data) {
			if (temp->next == NULL) {
				
				Node* temp2 = temp->prev;
				delete temp;
				temp2->next = NULL;
				return;
			}
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			delete temp;
			return;
		}
		temp = temp->next;
	}

	cout << "Data not found"<<endl;
}

void DoublyLinkedList::display() {

	if (head == NULL) {
	
		cout << "Linked List Empty" << endl;
	
	}

	Node* temp = head;

	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
}

void DoublyLinkedList::reverse() {

	Node* current = head;
	Node* temp = NULL;
	while (current != NULL) {
		
		current->prev = current->next;
		current->next = temp;
		temp = current;
		current = current->prev;
		
	}

	head = temp;
}
int main() {
	DoublyLinkedList l1;
	l1.insertinfront(5);
	l1.insertatend(10);
	l1.insertatend(15);
	l1.insertinfront(31);
	l1.insertatend(36);
	l1.delete_node(15);
	l1.display();
	l1.reverse();
	cout << endl;
	l1.display();

}