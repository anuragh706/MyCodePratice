#include<iostream>
#include <string>
using namespace std;

int MinFlipsRequired(string& s, char a) {
	int n = s.length();
	int ctr = 0,tmp=0;
	for (int i = 0; i < n; i++) {
		tmp = 0;
		while (s[i] == a) {
			i++;
			tmp = 1;
		}

		ctr+=tmp;
	
	}

	return ctr;
}
int main() {

	string s = "010101100011";
	cout << min(MinFlipsRequired(s, '0'), MinFlipsRequired(s, '1')) << endl;
}