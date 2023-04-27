#include <iostream>
#include<map>
#include<vector>

using namespace std;

template <typename T>
void printDistinct(vector<T>& arr) {

	map<int, int> m1;


	for (auto ele : arr) {

		//cout << ele << endl;
		if (m1.find(ele) == m1.end()) {
			cout << ele << endl;
			m1.insert({ ele,0 });
		}
		else m1[ele]++;
			
	}

}

int main() {

	vector<int> arr = { 33,56,33,51,21,67,21,67 };

	printDistinct(arr);

}