/*
 * The Building() class calculates the carbon footprint
 * of a building.
 * Author: Joseph Prostko
 * Project: Assignent 1: CPP Programming; Building Class
 * Version: October 2019
 */
#include "Building.h"
#include <string>
#include <iostream>
using namespace std;

/*
 * Building() is the default constructor which initializes all values to 0.
 */
Building::Building() {
	// sqrfeet is initialized to 0.
	this->sqrfeet = 0;

	// Therefore, the carbonFootprint is also 0.
	this->carbonFootprint = 0;
}

/*
 * Building(int) takes a value for the square feet of the building in the constructor.
 */
Building::Building(int a)
{
	// sqrfeet is initialied to the value of a.
	this->sqrfeet = a;

	// The carbon footprint is calculated by multiplying the square feet of the building by 134.
	this->carbonFootprint = a * 134;
}

/*
 * getCarbonFootprint() prints the value of square feet and carbon footprint of the building.
 */
void Building::getCarbonFootprint() const
{
	// The square feet and carbon footprint of the building are printed.
	std::cout << "Building with " << sqrfeet << " square feet: " << carbonFootprint << std::endl;
}