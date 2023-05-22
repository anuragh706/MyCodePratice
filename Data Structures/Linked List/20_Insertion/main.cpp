#include <iostream>
using namespace std;

class Node {

public:
	int data;
	Node* next;
	Node() :next(NULL), data(0) {};
	void InsertInFront(Node** head, int data);
	void Append(Node** head, int data);
	void InsertAfterANode(Node** head, int data1, int data2);

};

void Node::InsertInFront(Node** head,int data) {
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}

void Node::Append(Node** head, int data) {
	
	Node* new_node = new Node();
	new_node->data = data;

	Node* ptr = *head;
	
	if (*head == NULL) {
		Node* new_node1 = new Node();
		new_node1=
	}
	
	while ((ptr->next) != NULL) {
		ptr = ptr->next;
	}

	ptr->next = new_node;
}

void Node::InsertAfterANode(Node** head, int data1, int data2) {
	
	Node* ptr = *head;
	while ((ptr->data !=data1) && (ptr->next!=NULL)){
		ptr = ptr->next;
	}

	Node* new_node = new Node();
	new_node->data = data2;
	new_node->next = ptr->next;
	ptr->next = new_node;
}
int main() {

	Node n1();

}