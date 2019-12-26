/*
 * The Car() class calculates the carbon footprint
 * of a car.
 * Author: Joseph Prostko
 * Project: Assignent 1: CPP Programming; Car Class
 * Version: October 2019
 */
#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

/*
 * The default constructor for Car() intializes all values as zero.
 */
Car::Car()
{
	// gallons is initialized as 0.
	this->gallons = 0;

	// Therefore, the carbon footprint is also 0.
	this->carbonFootprint = 0;
}

/*
 * The Car(int) constructor takes a specified amount of gallons used for a car.
 */
Car::Car(int a)
{
	// gallons is initializes as the value of a.
	this->gallons = a;

	// The carbon footprint is found by multiplying a by 20.
	this->carbonFootprint = a * 20;
}

/*
 * The overrode getCarbonFootprint() method neatly prints the carbon footprint of a car
 * that has used a specified amount of gas.
 */
void Car::getCarbonFootprint() const
{
	// A print statement outputs the gallons and carbon footprint of a car.
	std::cout << "Car that has used " << gallons << " gallons of gas: " << carbonFootprint << std::endl;
}