#include <iostream>
#include <string>
using namespace std;

int flipsrequired(string& s, char begin) {

	int n = s.length();
	int flips = 0;
	for (int i = 0; i < n; i++) {
		
		if (s[i] != begin) flips++;

		begin = (begin == '0') ? '1' : '0';
	}

	return flips;
}
int main() {

	string str = "001";

	cout << min(flipsrequired(str, '0'), flipsrequired(str, '1')) << endl;
}