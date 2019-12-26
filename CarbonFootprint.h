/*
 * The CarbonFootprint() class defines an abstract method
 * which returns the carbon footprint of a given thing.
 * Author: Joseph Prostko
 * Project: Assignent 1: CPP Programming; CarbonFootprint Class
 * Version: October 2019
 */
#ifndef CARBONFOOTPRINT_H_
#define CARBONFOOTPRINT_H_
#include <string>
#include <iostream>
using namespace std;

class CarbonFootprint {
public:
	// getCarbonFootprint() will return the carbon footprint of a given thing.
	virtual void getCarbonFootprint() const = 0;
};

#endif /*CARBONFOOTPRINT_H_*/