#include <iostream>
#include <vector>
using namespace std;

template<typename T>
int BinarySearch(vector<T>& arr, T element, int left, int right) {

	if (left > right)
		return -1;

	int mid = (left + right) / 2;
	
	if (arr[mid] == element) return mid;
	else 
		if (element > arr[mid])
		return BinarySearch(arr, element, mid+1, right);

	else return BinarySearch(arr, element, left, mid-1);

}
int main() {

	int total;
	int num, element;
	vector<int> array;
	cout << "Enter the number of elements to be entered:";
	cin >> total;
	
	for (int i = 0; i < total; i++) {
	
		cin >> num;

		array.push_back(num);

	}

	cout << "Enter the element you want to search: ";
	cin >> element;

	cout << "The element is fount at " << BinarySearch(array, element, 0, array.size()-1) << " position." << endl;

	return 0;


}