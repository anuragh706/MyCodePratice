#include <iostream>
#include <string>

using namespace std;

void EraseOccurences1(string& s, char a) {
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == a) {
			s.erase(s.begin() + i);
			i--;
		}
	}
}

void EraseOccurences2(string& s, char a) {
	int ctr = 0;
	string temp = "";
	for (int i = 0; i < s.length(); i++) {
		
		while (s[i] == a) {
		
			i++;
		}

		temp+= s[i];
		//cout << s[i];
	}
	s = temp;
	//cout << endl;
	//s[ctr] = '\0';


}

int main() {
	
	string s = "geeksforgeeks";
	string s2= "geeksforgeeks";
	char a = 'e';
	EraseOccurences1(s, a);

	EraseOccurences2(s2, a);
	cout << s << endl;
	cout << s2 << endl;


}