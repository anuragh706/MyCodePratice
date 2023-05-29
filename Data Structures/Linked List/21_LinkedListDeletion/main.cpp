#include <iostream>
#include <list>
using namespace std;


class Node {

public:
	
	int data;
	Node* next;
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
	LinkedList(){
		head = NULL;
	}
	void InsertInFront(int data);
	void InsertAtTheEnd(int data);
	void InsertAfterANode(int data1, int data2);
	void DeleteNode(int data);
	void printList();
};

void LinkedList::InsertInFront(int data) {
	
	Node* new_node = new Node(data);
	if (head == NULL) {
		head = new_node;
		return;
	}
	new_node->next = head;
	head = new_node;
}

void LinkedList::InsertAtTheEnd(int data) {

	Node* new_node = new Node(data);
	Node* ctr = head;
	
	if (head == NULL) {
		
		head = new_node;
		return;
	}
	//cout << "Hi" << endl;
	while (ctr->next != NULL) {
		//cout << ctr->data << endl;
		ctr = ctr->next;
		
	}
	//cout << ctr->data << endl;
	ctr->next = new_node;
	
}

void LinkedList::InsertAfterANode(int data1, int data2) {

	Node* new_node = new Node();
	new_node->data = data1;
	Node* ctr = head;

	if (head == NULL) {
		cout << "No data present in the linked list.";
		return;
	}

	while (ctr != NULL && ctr->data != data2) {
		//cout << ctr->data << endl;
		ctr = ctr->next;
	}

	if (ctr == NULL) {
		cout << "Node with data " << data2 << " not found.";
		return;

	}
	new_node->next= ctr->next;
	ctr->next=new_node;
	
	
}

void LinkedList::printList() {

	if (head == NULL) {
		cout << "Empty List.";
		return;
	}

	Node* ctr=head;

	while (ctr->next != NULL) {

		cout << ctr->data << " -> ";
		ctr = ctr->next;
	}

	cout << ctr->data<<endl;

}

void LinkedList::DeleteNode(int data) {

	Node* ctr = head;
	if (ctr == NULL) {
		cout << "Empty List. ";
		return;
	}

	if (head->data == data) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return;

	}
	while (ctr->next!= NULL && ctr->next->data != data) {
		ctr = ctr->next;
	}

	if (ctr->next == NULL) {
		cout << "node not found.";
		return;
	}
	
	Node* temp = ctr->next;

	ctr->next = temp->next;

	delete temp;
}
int main() {

	LinkedList l1;
	
	l1.InsertInFront(5);
	l1.InsertInFront(10);
	l1.InsertInFront(11);
	l1.InsertAtTheEnd(16);
	l1.InsertAtTheEnd(21);
	l1.InsertAtTheEnd(29);
	l1.InsertAfterANode(17,5);
	l1.InsertAfterANode(91, 29);
	l1.InsertAfterANode(46, 11);
	l1.printList();
	l1.DeleteNode(21);
	l1.DeleteNode(91);
	l1.DeleteNode(11);
	l1.printList();



}