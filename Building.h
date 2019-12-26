/*
 * The Building() class calculates the carbon footprint
 * of a building.
 * Author: Joseph Prostko
 * Project: Assignent 1: CPP Programming; Building Class
 * Version: October 2019
 */
#ifndef BUILDING_H_
#define BUILDING_H_

#include "CarbonFootprint.h"
#include <string>
#include <iostream>
using namespace std;

class Building : public CarbonFootprint {
public:
	// Building() is the default constructor.
	Building();

	// Building(int) constructs a building with the specified amount of square feet.
	Building(int);

	// getCarbonFootprint() method is overrode.
	virtual void getCarbonFootprint() const override;

	// int sqrfeet holds the specified amount of square feet of the building.
	int sqrfeet;

	// int carbonFootprint holds the specified carbonFootprint of the building.
	int carbonFootprint;
};

#endif /*BUILDING_H_*/