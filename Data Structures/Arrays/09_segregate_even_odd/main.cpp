#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void segregateEvenOdd(vector<T>& arr) {

	int total = arr.size();
	vector<T> arr2(total);
	int temp;
	int ctr = total-1;
	for (int i = 0; i <= ctr; i++) {
	
		if ((arr[i] % 2) != 0) {
			while (ctr>=0 && (arr[ctr] % 2) != 0 )
			{
				ctr--;
			}
			if (ctr + 1 != i && ctr >=0) {
				temp = arr[i];
				arr[i] = arr[ctr];
				arr[ctr] = temp;
			}
		}

	}
}
int main() {

	vector < int > arr = { 10,30,70,90,50 };

	//merge_sort(arr, 0, arr.size() - 1);
	segregateEvenOdd(arr);
	for (int i = 0; i < arr.size(); i++) {

		cout << arr[i] << "\t";
	}

}