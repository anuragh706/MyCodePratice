#include<iostream>
using namespace std;


class mystack {
public:
	int top;
	int capacity;
	double* arr;
	mystack() {
		top = -1;
		capacity = 0;

	}
	mystack(int capacity1) {
		top = -1;
		capacity = capacity1;
		arr = new double[capacity1];
	}
	void push(double ele);
	void pop();
	double peek();
	bool isEmpty();
	bool isFull();
	int getSize();
};

void mystack::push(double ele) {

	if (isFull()) {
		cout << "Stack Full. Empty the stack then add element."<<endl;
		return;
	}
	arr[++top] = ele;
	cout << "Element pushed is:" << ele << endl;

}
void mystack::pop() {
	if (isEmpty()) {
		cout << "Empty Stack."<<endl;
		return;
	}

	cout << "Element removed from stack is:" << peek()<<endl;
	top--;
}

double mystack::peek() {

	if (top == -1) {
		cout << "Stack is empty."<<endl;
		return 0;
	}

	return arr[top];

}

bool mystack::isEmpty() {

	if (top == -1) return 1;
	else return 0;
}
bool mystack::isFull() {
	if (top == capacity - 1) {
		return 1;
	}
	else return 0;
}
int mystack::getSize() {
	return top + 1;
}
int main() {

	mystack m1(10);
	m1.pop();
	m1.push(10);
	m1.push(15);
	m1.push(30);
	m1.push(11);
	m1.push(12);
	m1.push(37);
	m1.push(900);
	m1.push(87);
	m1.push(33);
	m1.push(16);
	m1.push(100);
	m1.pop();
	cout << "Last element is:" << m1.peek()<<endl;
	cout << "Size of the stack is:" << m1.getSize() << endl;
}