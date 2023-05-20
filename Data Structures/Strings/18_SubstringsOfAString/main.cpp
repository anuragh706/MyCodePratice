#include<iostream>
#include <string>
using namespace std;

void PrintSubstring(string s) {
	int n = s.length();
	
	for (int i = 0; i < n; i++) {
	
		string temp = "";
		for (int j = i; j < n; j++) {
			
			temp += s[j];
			cout << temp << endl;
		}
		//cout << temp << endl;
	}

}
int main() {

	string str = "abcd";
	PrintSubstring(str);
	cout<<str.substr(0);
}