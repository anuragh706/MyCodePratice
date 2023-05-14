#include <iostream>
#include <string>
using namespace std;

void right_rotate(string& s, int a) {
	int n = s.length();
	int shift = a % n;

	reverse(s.begin(), s.begin() + (n - shift));
	reverse(s.begin() + (n - shift), s.end());
	reverse(s.begin(), s.end());
}

void left_rotate(string& s, int a) {
	int n = s.length();
	int shift =(n+ (n-a-1)%n)%n+1;

	reverse(s.begin(), s.begin() + (n - shift));
	reverse(s.begin() + (n - shift), s.end());
	reverse(s.begin(), s.end());
}
int main() {

	string str1 = "GeeksforGeeks", str2= "GeeksforGeeks";
	int a = 2;
	right_rotate(str1, a);
	cout << str1<<endl;
	left_rotate(str2, a);
	cout << str2 << endl;



}
