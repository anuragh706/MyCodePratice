#include <iostream>
#include<stack>
using namespace std;

class mystack {
public:
	string arr;
	int top;
	int capacity;
	mystack() {
		
		top = -1;
		capacity = 0;
		arr = "";
	}
	mystack(string a,int cap) {
		arr = a;
		capacity = cap;
		top = a.length()-1;
	}
	void push(char a) {
		if (top == capacity - 1) {
			cout << "Stack overflow." << endl;
			return;
		}
		arr+=a;
		++top;
	}
	char pop() {
		if (top == -1) {
			cout << "Empty string"<<endl;
			return ' ';
		}
		char temp = arr[top];
		top--;
		return temp;
	}
	char peek() {
		if (top == -1) {
			cout << "Empty Stack"<<endl;
			return ' ';
		}

		return arr[top];
	}
};

string infix_to_prefix(string infix_string) {
	
	mystack s1(infix_string, 100);

}
int main() {

	mystack s1("Anuraag",100);
	s1.push('d');
	s1.push(' f');
	cout << "Popped element is:" << s1.pop() << endl;
	cout << "Peeking into the top element." << s1.peek() << endl;

	

}