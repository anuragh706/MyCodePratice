#include <iostream>
#include <string>
#include<bitset>
using namespace std;

int BinaryToInt(string& s) {
	bitset<32> b(s);
	int n = b.to_ulong();
	return n;
}

string IntToBinary(int n) {
	string temp = bitset<32>(n).to_string();
	temp.erase(0, temp.find_first_not_of('0'));
	return temp;
}

string addOneToBinary(string& s) {

	int n = s.length() - 1;
	int i;
	for (i = n; i >= 0; i--) {
		if (s[i] == '0') {
			s[i] = '1';
			break;
		}
		else s[i] = '0';
	}

	if (i < 0) s = '1' + s;

	return s;
}

int main() {

	string s = "10011";
	cout << IntToBinary(BinaryToInt(s) + 1) << endl;
	cout << addOneToBinary(s);
}