#include<iostream>
#include <vector>
using namespace std;


template <typename T>
void merge(vector<T>& arr, int left, int mid, int right) {

	int left_array_size = mid - left + 1;
	int right_array_size = right - mid;

	vector<T> arr_left(left_array_size);
	vector<T> arr_right(right_array_size);

	for (int i = 0; i < left_array_size; i++) {
		arr_left [i]= arr[left + i];
	}

	for (int i = 0; i < right_array_size; i++) {
		arr_right[i] = arr[mid + 1 + i];
	}
	int left_ctr = 0;
	int right_ctr = 0;
	int main_ctr = left;

	while (left_ctr < left_array_size && right_ctr < right_array_size) {
		
		if (arr_left[left_ctr] < arr_right[right_ctr]) {
			
			arr[main_ctr] = arr_left[left_ctr];
			left_ctr++;
		}
		else if (arr_left[left_ctr] >= arr_right[right_ctr]) {

			arr[main_ctr] = arr_right[right_ctr];
			right_ctr++;
		}

		main_ctr++;

	
	}
	while (left_ctr < left_array_size) {

		arr[main_ctr] = arr_left[left_ctr];
		left_ctr++;
		main_ctr++;

	}

	while (right_ctr < right_array_size) {

		arr[main_ctr] = arr_right[right_ctr];
		right_ctr++;
		
		main_ctr++;

	}
	



}

template <typename T>
void mergesort(vector<T>& arr, int left, int right) {

	if (left >= right) return;

	int mid = (left + right) / 2;

	mergesort(arr, left, mid);
	mergesort(arr, mid + 1, right);
	merge(arr, left, mid, right);


}

template <typename T>
vector<T> OddPositionGreaterThanEven(vector<T>& arr) {

	int total = arr.size();
	vector<T> arr2(total);
	mergesort(arr, 0, total - 1);
	int ctr = 0;
	int i;
	for (i = 0; i < total-1;) {
	
		arr2[ctr++] = arr[i+1];
		arr2[ctr++] = arr[i];
		i += 2;
	
	}
	if (i == total - 1) arr2[ctr] = arr[i];
	return arr2;

}

template <typename T>
vector<T> EvenPositionGreaterThanOdd(vector<T> arr) {

	int total = arr.size();
	vector<T> arr2(total);
	mergesort(arr, 0, total - 1);

	int i = (total-1) / 2;
	int j = total-1;
	int mid = (total - 1) / 2 + 1;
	int ctr = 0;
	while (ctr < total && i>=0 && j>=mid) {
	
		arr2[ctr++] = arr[i--];
		arr2[ctr++] = arr[j--];
		
	}


	if (i == 0) arr2[ctr] = arr[i];

	return arr2;

}

int main() {

	vector<double> arr = { 12,65,10,8,4,6 };

	//mergesort(arr, 0, arr.size() - 1);

	vector<double> arr2(arr.size());
	arr2=EvenPositionGreaterThanOdd(arr);
	cout << "Even greater than odd"<<endl;
	for (int i = 0; i < arr2.size(); i++) {
		cout << arr2[i] << "\t";
	
	}

	cout << "\nOdd greater than even: " << endl;
	vector<double> arr3(arr.size());

	arr3 = OddPositionGreaterThanEven(arr);
	for (int i = 0; i < arr3.size(); i++) {
		cout << arr3[i] << "\t";

	}
}