#pragma once
#include "car.h"
#include "suv.h"
#include "sedan.h"
enum CarType {SUV, SEDAN};
class factory {

public:
	Car* CreateCar(CarType t,double acc,double pow,double inch) {

		Car* new_car;
		switch (t) {

		case SUV: 
			new_car= new suv;
			
			break;
		case SEDAN:
			new_car= new sedan;
			break;
		default: 
			return NULL;
		}

		new_car->SetAcceleration(acc);
		new_car->SetEnginePower(pow);
		new_car->SetVehicleInch(inch);

		return new_car;
	
	}
	
};