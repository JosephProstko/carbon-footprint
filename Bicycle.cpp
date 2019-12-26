/*
 * The Bicycle() class calculates the carbon footprint
 * of a bicycle.
 * Author: Joseph Prostko
 * Project: Assignent 1: CPP Programming; Bicycle Class
 * Version: October 2019
 */
#include "Bicycle.h"
#include <string>
#include <iostream>
using namespace std;

/*
 * The default constructor for bicycle has no values to initialize, since
 * the carbon footprint is constant.
 */
Bicycle::Bicycle() {}

/*
 * The getCarbonFootpring() method prints the carbon footprint of a bicycle.
 */
void Bicycle::getCarbonFootprint() const
{
	// The bicycle carbon footprint is printed.
	std::cout << "Bicycle: 0" << std::endl;
}