#pragma once
#include "car.h"
class sedan: public Car {

public:
	void SetEnginePower(int pow) {
		this->pow = pow;
		cout << "Power Set" << pow<<endl;
	}
	void SetVehicleInch(int inch) {
		this->inch = inch;
		cout << "Inch Set" <<inch<< endl;
	}
	void SetAcceleration(int acc) {
		this->acc = acc;
		cout << "Acceleration Set" <<acc<< endl;
	}

	void ShowProperties() {
		cout << "Acceleration is" << this->acc << endl;
		cout << "Power is" << this->pow << endl;
		cout << "Tyre is" << this->inch << endl;
	}

};