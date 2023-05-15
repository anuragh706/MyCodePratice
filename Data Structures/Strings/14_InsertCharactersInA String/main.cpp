#include <iostream>
#include <vector>
using namespace std;
#include <string>

string insertCharacter(string& s, vector<int> a) {

	string temp = "";
	int ctr = 0;
	for (int i = 0; i < s.length(); i++) {
	
		if (ctr < a.size() && i == a[ctr]) {
			temp += "*";
			ctr++;
		}
		temp += s[i];
	}

	return temp;
}
int main() {

	string s = "geeksforgeeks";
	vector<int> a = { 1,3,5,7 };
	cout << insertCharacter(s, a) << endl;

}