#include<iostream>
#include <vector>
using namespace std;


int main() {
	int new_position;
	int shift=0;

	vector<double> arr = { 4,6,9,1,2,10 };
	int total_elements = arr.size();
	vector<double> arr2(total_elements);
	for (int i = 0; i < total_elements; i++) {
		new_position = (total_elements + (i + shift) % total_elements)%total_elements;
		arr2[new_position] = arr[i];
		cout << arr[i] << "\t";
	}
	cout<<"\nArray after "<<shift<< " shifts "<<endl;
	for (int i = 0; i < total_elements; i++) {
	
		cout << arr2[i] << "\t";
	}
}
