#pragma once
#include<iostream>
using namespace std;
class Car {

public:
	virtual void SetEnginePower(int pow) = 0;
	virtual void SetVehicleInch(int inch) = 0;
	virtual void SetAcceleration(int acc) = 0;
	virtual void ShowProperties() = 0;
protected: 
	int pow, inch, acc;
};