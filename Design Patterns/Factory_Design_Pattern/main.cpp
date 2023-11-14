#include <iostream>
#include "sedan.h"
#include "suv.h"
#include "factory.h"
using namespace std;

int main() {

	factory f1;


	Car* car1=f1.CreateCar(SUV, 50,65,18);

	Car* car2=f1.CreateCar(SEDAN,100,94,82);

	car1->ShowProperties();
	car2->ShowProperties();

}