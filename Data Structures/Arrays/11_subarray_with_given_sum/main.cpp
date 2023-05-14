#include<iostream>
#include <vector>

using namespace std;
template <typename T>
void PrintSubarray(vector<T>& arr, T sum) {
	int total = arr.size();
	T ctr = 0;
	int idx1, idx2;
	
	for (int i = 0; i < total; i++) {

		if (arr[i] == sum) {
			cout << i << endl;
			break;
		}
		idx1 = i;
		ctr += arr[i];
	
		for (int j = i+1; j < total; j++) {
		
			ctr += arr[j];
			if (sum == ctr) {
				
				idx2 = j;
				cout << i << "\t" << j << endl;
				break;
			}
		
		}

		ctr = 0;
	
	}

}

int main() {

	vector<double > arr = { 1, 4, 0, 0, 3, 10, 5 };
	double sum = 7;

	PrintSubarray(arr, sum);


}