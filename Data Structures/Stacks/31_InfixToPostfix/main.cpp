#include<iostream>
#include<string>
using namespace std;


class mystack {
public:
	int top;
	string arr;
	int capacity;

	mystack() {
		top = -1;
		arr = "";
		capacity = 0;
	}
	mystack(int sz) {
		capacity = sz;
		top = -1;
	}
	void push(char a) {
	
		arr += a;
		top++;
	}
	char pop() {
		if (isEmpty()) return ' ';
		char temp = arr[top];
		arr.replace(top--, 1, "");
		return temp;
	}
	bool isEmpty() {
	
		if (top == -1) return 1;
		else return 0;
	}

	char peek() {
		if (top == -1) return ' ';
		else return arr[top];
	}
};

int precedence(char precedence) {

	switch (precedence) {
	
	case '+': return 1;
	case '-': return 1;
	case '*': return 2;
	case '/': return 2;
	case '^': return 3;
	default: return -1;
	}
}
bool isOperator(char x) {
	if (x == '*' || x == '+' || x == '/' || x == '^' || x == '-') return 1;
	else return 0;
}
string infix_to_postfix(string infix) {
	int n = infix.length();
	string postfix = "";
	mystack s1(100);
	if (n == 0) 
	{
		return "Empty Infix Expression.";
	}
	for (int i = 0; i <= n; i++) {
	
		if (isOperator(infix[i])) 
		{	
			if (s1.isEmpty()) 
			{
				// if stack empty and if it is an operator then push it in the stack
				s1.push(infix[i]);
				continue;
			}
			else 
			{
			// if the precedence of the operator in the expression is greater than the one in the stack, push it in the stack.  
				
				
			// else if it is less than (or equal to), then output all the elements of stack unless we encounter an operator of bigger precedence. 
				while (!s1.isEmpty() && precedence(s1.peek())>= precedence(infix[i])) 
				{
					postfix += s1.pop();
				}

				s1.push(infix[i]);
				
			
			}
				
		}
		else if (infix[i] == '(') 
		{
			s1.push('(');
		}
		else if (infix[i]==')') 
		{
				while (!s1.isEmpty() && s1.peek() != '(') 
				{
					postfix += s1.pop();
				}
				s1.pop();
		}
		else postfix += infix[i];
		
	}

	while (!s1.isEmpty()) {
		postfix+=s1.pop();
	}
	return postfix;
}

int main() {

	string exp1 = "A+B*C+D";
	mystack s1(100);
	string exp2 = "((A+B)-C*(D/E))+F";

	cout << infix_to_postfix(exp2)<<endl;
	/*
	string a = "Anuraag";
	cout << a.length()<<endl;
	//string replacement="";
	a.replace(3, 2, "");
	cout << a << endl;
	*/


	

}