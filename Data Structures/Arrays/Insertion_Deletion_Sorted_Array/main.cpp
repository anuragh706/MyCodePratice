#include<iostream>
#include <vector>
using namespace std;

template <typename T>
int search(vector<T>& arr, T ele, int left, int right) {

	int mid = (left + right) / 2;

	if (left > right) return -1;
	if (arr[mid] == ele) return mid;
	if (ele > arr[mid]) return search(arr, ele, mid+1, right);
	else return search(arr, ele, left, mid-1);
}
template <typename T>
void insert(vector<T>& arr, T ele) {
	
	int idx;
	int total = arr.size();
	int left = 0;
	int right = total - 1;
	if (ele < arr[0]) {
		idx = 0;
		
	}
	else if (ele > arr[total - 1]) idx = total - 1;
	else {
		while ((right - left) > 1) {

			int mid = (right + left) / 2;

			if (arr[mid] > ele) right = mid;
			else left = mid;


		}

		idx = left;
	}

	arr.resize(total + 1);
	for (int i = total-1; i >= idx+1; i--) {
		arr[i + 1] = arr[i];
	}
	arr[idx] = ele;
}
int main() {

	vector<double> arr = { 12,13,16,29,30,39,45 };
	double searchele = 29;
	double ele = 46;

	cout <<"Search element: "<< search(arr, searchele, 0, arr.size() - 1) << endl;
	insert(arr, ele);
	
	for (int i = 0; i < arr.size(); i++) {
	
		cout << arr[i] << "\t";
	}
}