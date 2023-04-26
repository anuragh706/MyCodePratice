#include<vector>
#include <iostream>
using namespace std;

template <typename T>
void MoveZerosToEnd(vector<T>& arr) {

	int total = arr.size();
	int ctr = 0;
	for (int i = 0; i < total; i++) {
	
		if (arr[i] != 0) {

			arr[ctr] = arr[i];
			ctr++;
		}
	}

	while (ctr < total) {
		arr[ctr] = 0;
		ctr++;
	}

}


int main() {

	vector<double> arr = { 1,2,0,0,0,3,6 };

	for (int i = 0; i < arr.size(); i++) {

		cout << arr[i] << "\t";
	}

	cout << endl;
	MoveZerosToEnd(arr);

	for (int i = 0; i < arr.size(); i++) {

		cout << arr[i] << "\t";
	}

	

}