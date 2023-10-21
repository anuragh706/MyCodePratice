#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main() {

	vector<int> vect = { 10,22,13,84,-5,6 };

// lambda function 1, sent as value

	int a = 10;

	auto func1 = [a](int c) {
		
		//a = 32; wont work since sent as value
		return a + c;
	};
	cout << func1(21) << endl;

	// lambda function 2, sent as reference, allows us to change the value

	auto func2 = [&a](int c) {

		a = 32; 
		return a + c;
	};

	cout << func2(21)<<endl;

	// lambda function 3 passing a defaulut value

	auto func3 = [](int val) {

		return val;
	
	}(100);

	cout << func3 << endl;


	// ////////////////////////////lambda function 4, passing all values by reference

	auto func4 = [&](int val) {
		a = 35;
		return a + val;

	};

	cout << func4(100) << endl;

	//////////////////////////////////////// lambda function 5, passing all values by value

	auto func5 = [=](int val) {
		//a = 35; doesnt work as passed by value
		return a + val;

	};

	cout << func5(109) << endl;

	// lambda 6, showing return type while defining the lambda function

	auto func6 = [&](int val) ->int{
		return val;
	};
	cout << func6(1600) << endl;

	auto printele = [](int ele) {cout << ele << endl; };

	/////////////////////////////////////// For_each using lambdas

	for_each(vect.begin(), vect.end(), printele);
	
	cout << "Sorting" << endl;


	// ////////////////////////////////////////////Sorting using lambdas
	sort(vect.begin(), vect.end(), [](int a, int b) {

		return a < b;

	});

	for_each(vect.begin(), vect.end(), [](int ele) {
		
		cout << ele << "\t";
		
	});


	
}