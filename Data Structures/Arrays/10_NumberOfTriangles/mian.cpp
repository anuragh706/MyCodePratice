#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
int NumberOfTriangles(vector<T> arr) {

	sort(arr.begin(), arr.end());
	int total = arr.size();
	int k;
	int ctr = 0;
	for (int i = 0; i < total-2; i++) {

		k = i + 2;
		for (int j = i + 1; j < total; j++) {
		
			while (k < total && arr[i] + arr[j] > arr[k])
				++k;
			if(k>j)
			ctr += (k - j - 1);
		
		}

	}

	return ctr;


}

int main() {

	vector<double> arr= { 10, 21, 22, 100, 101, 200, 300 };
	cout<<NumberOfTriangles(arr) << endl;
}