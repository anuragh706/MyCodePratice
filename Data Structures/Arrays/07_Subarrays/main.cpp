#include<iostream>
#include<vector>
using namespace std;

template <typename T>
void getSubarrays(vector<T>& arr, int beg, int end) {
	

	if (end > arr.size()-1) return;
	else if (beg <= end) {

		for (int i = beg; i <= end; i++) {
			cout << arr[i] << "\t";
		}
		cout << endl;
		getSubarrays(arr, beg + 1, end);
	}
	else if (beg > end) {
		getSubarrays(arr, 0, end + 1);
	}
	else return;

}

int main() {
	vector<double> arr = { 1,2,3 };
	getSubarrays(arr, 0, 0);


}