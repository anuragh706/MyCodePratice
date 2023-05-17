#include <iostream>
#include <string>
#include <bitset>
using namespace std;

string IntToBinary(int num) {
	bitset<32> b(num);
	return b.to_string();
}

string PrintAfterIterations(int m,int n, int i ) {
	string s = IntToBinary(m);
	string strsize = s.size();
	string temp = "";
	for (int i = 0; i < n; i++) {
		if (s[i] == '0')
			temp += "01";
		else temp += "10";
	}

	return temp;

}

int main() {

	int m = 5, n = 2, i = 8;




}