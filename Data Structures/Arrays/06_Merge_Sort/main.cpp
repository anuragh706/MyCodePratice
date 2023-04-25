#include<iostream>
#include <vector>
using namespace std;

template <typename T>

void merge(vector<T>& arr, int left, int mid, int right) {
	
	int arr_left_elements = mid - left + 1;
	int arr_right_elements = right - mid;

	T* arr_left = new T[arr_left_elements];
	T* arr_right = new T[arr_right_elements];

	for (int i = 0; i < arr_left_elements; i++)
		arr_left[i] = arr[left + i];
	for (int i = 0; i < arr_right_elements; i++)
		arr_right[i] = arr[mid+1 + i];

	int ctrleft = 0, ctrright = 0;
	int ctrmain = left;
	while (ctrleft < arr_left_elements && ctrright < arr_right_elements) {
		
		if (arr_left[ctrleft] <= arr_right[ctrright]) {

			arr[ctrmain] = arr_left[ctrleft];
			ctrleft++;
		}
		else {
			arr[ctrmain] = arr_right[ctrright];

			ctrright++;
		
		}

		ctrmain++;
		
	}

	while (ctrleft < arr_left_elements) {


			arr[ctrmain] = arr_left[ctrleft];
			ctrleft++;
			ctrmain++;

	}

	while (ctrright < arr_right_elements) {

			arr[ctrmain] = arr_right[ctrright];

			ctrright++;
			ctrmain++;

	}

	delete[] arr_left;
	delete[] arr_right;
}

template <typename T>
void merge_sort(vector<T>& arr, int left, int right) {


	if (left >= right) return;

	int mid = (left + right) / 2;
	merge_sort(arr, left, mid);
	merge_sort(arr, mid + 1, right);
	merge(arr,left, mid, right);

}

int main() {

	vector < double > arr = { 23,12,89,1,0, 64,5 };

	merge_sort(arr, 0, arr.size() - 1);

	for (int i = 0; i < arr.size(); i++) {
	
		cout << arr[i] << "\t";
	}

}