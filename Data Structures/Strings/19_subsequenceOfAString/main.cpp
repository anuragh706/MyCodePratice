#include<iostream>
#include <string>
using namespace std;

void PrintSubsequence(string s_input, string s_output ) {

	if (s_input.empty()) {
		cout << s_output << endl;
		return;
	}
	PrintSubsequence(s_input.substr(1), s_output + s_input[0]);
	PrintSubsequence(s_input.substr(1), s_output);
}

int main() {

	string s_input = "abcd";
	string s_output = "";
	PrintSubsequence(s_input, s_output);
}