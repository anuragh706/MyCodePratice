#include <iostream>
using namespace std;

class Node {

public:
	int data;
	Node* next;
	//Node() :next(NULL), data(0) {};
	void InsertInFront(Node** head, int data);
	void Append(Node** head, int data);
	void InsertAfterANode(Node** head, int data);

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
	if (ptr == NULL) {
		*head = new_node;
		return;
	}
	while ((ptr->next) != NULL) {
		ptr = ptr->next;
	}
	ptr->next = new_node;
}

void Node::InsertAfterANode(Node** prev_node, int data) {
	
	if (*prev_node == NULL) {
		cout << "Previous node cant be empty." << endl;
		return;
	}
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = (*prev_node)->next;
	(*prev_node)->next = new_node;
	
}
int main() {

	Node* node = NULL;
	
	node->Append(&node, 6);
	node->InsertInFront(&node, 7);
	node->InsertInFront(&node, 1);
	node->Append(&node, 4);
	node->InsertAfterANode(&(node->next), 8);
	

	while (node != NULL) {
	
		cout << node->data << endl;
		node = node->next;
	}

	return 0;
}
