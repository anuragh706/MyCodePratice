#include <iostream>
#include <vector>
using namespace std;

template<typename T>
int search(vector < T >& arr, T ele) {

	
	int total_elements = arr.size();
	for (int i = 0; i < total_elements; i++) {
		if (arr[i] == ele) return i;
	}

	return -1;
}


template<typename T>
void insertion(vector < T >& arr, int pos, int ele) {

	arr.resize(arr.size() + 1);
	int total_elements = arr.size();
	for (int i = total_elements - 1; i > pos; i--) {
		arr[i] = arr[i-1];
	}

	arr[pos] = ele;
}

template<typename T>
void deletion(vector < T >& arr, T ele) {
	int idx = search(arr, ele);
	if (idx == -1) {
		cout << "Element not found" << endl;
		return;
	}
	int total_elements = arr.size();
	for (int i = idx; i < total_elements-1; i++) {
		arr[i] = arr[i + 1];
	}

	arr.resize(arr.size() - 1);

}


int main() {


	vector <int> arr = { 2,4,6,9,10 };
	int ele = 91;
	int pos = 6;
	insertion(arr, pos-1, ele);
	for (int i = 0; i < arr.size(); i++) {
		
		cout << arr[i] << "\t";
	}

	cout << endl;
	ele=2;
	deletion(arr, ele);
	for (int i = 0; i < arr.size(); i++) {

		cout << arr[i] << "\t";
	}


}