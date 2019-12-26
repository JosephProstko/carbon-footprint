/*
 * The Bicycle() class calculates the carbon footprint
 * of a bicycle.
 * Author: Joseph Prostko
 * Project: Assignent 1: CPP Programming; Bicycle Class
 * Version: October 2019
 */
#ifndef BICYCLE_H_
#define BICYCLE_H_
#include "CarbonFootprint.h"
#include <string>
#include <iostream>
using namespace std;

class Bicycle : public CarbonFootprint {
public:
	// Bicycle() is the default constructor.
	Bicycle();

	// getCarbonFootprint() is overrode.
	virtual void getCarbonFootprint() const override;
};

#endif /*BICYCLE_H_*/