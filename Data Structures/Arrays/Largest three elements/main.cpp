#include <iostream>
#include <vector>

using namespace std;
struct numbers{
	double m1, m2, m3;

};
numbers threelargest(vector<double>& arr) {

	int size = arr.size();

	int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
	
	for (int i = 0; i < size; i++) {
	
		if (arr[i] > max1) {
			max3 = max2;
			max2 = max1;
			max1 = arr[i];
			continue;
		}
		if (arr[i] > max2 && arr[i]<max1) {
			max3 = max2;
			max2 = arr[i];
			continue;
		
		}
		if (arr[i] > max3 && arr[i] < max2) {
			max3 = arr[i];
			continue;
		}
	}

	numbers n1;
	n1.m1 = max1;
	n1.m2 = max2;
	n1.m3 = max3;

	return n1;
}

int main() {

	vector<double> arr= { 98,12,45,32,67,90,11,54 };

	numbers n2=threelargest(arr);

	cout << n2.m1 << endl<<n2.m2<<endl<<n2.m3<<endl;

	return 0;
}