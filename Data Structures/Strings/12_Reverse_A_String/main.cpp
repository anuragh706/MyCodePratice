#include<iostream>
#include <string>
using namespace std;

void swap(char& a, char& b) {
	char c = a;
	a = b;
	b = c;
}
void reverse(string& s) {

	int n = s.length()-1;
	for (int i = 0; i < n/2; i++) {
		swap(s[i], s[n - i]);
	}
}
int main() {

	string s = "Anuraag";

	reverse(s);

	cout << s << endl;
}