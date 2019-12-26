/*
 * The Car() class calculates the carbon footprint
 * of a car.
 * Author: Joseph Prostko
 * Project: Assignent 1: CPP Programming; Car Class
 * Version: October 2019
 */
#ifndef CAR_H_
#define CAR_H_
#include "CarbonFootprint.h"
#include <string>
#include <iostream>
using namespace std;

class Car : public CarbonFootprint {
public:
	// Car() is the default constructor.
	Car();

	// Car(int) takes a specified amount of gallons for a car.
	Car(int);

	// getCarbonFootprint() method is overrode.
	virtual void getCarbonFootprint() const override;

	// carbonFootprint holds the calculated carbon footprint of the car.
	int carbonFootprint;

	// gallons holds the specified amount of gallons of gasoline used by the car.
	int gallons;
};

#endif /*CAR_H_*/